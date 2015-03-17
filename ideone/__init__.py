from suds.client import Client
from suds.xsd.doctor import ImportDoctor, Import
import difflib

class Status(object):
    AWAITING_COMPILATION = -1
    DONE = 0
    COMPILING = 1
    RUNNING = 3

class Result(object):
    NOT_RUN = 0
    COMPILATION_ERROR = 11
    RUNTIME_ERROR = 12
    TIME_LIMIT_EXCEEDED = 13
    SUCCESS = 15
    MEMORY_LIMIT_EXCEEDED = 17
    ILLEGAL_SYSTEM_CALL = 19
    INTERNAL_ERROR = 20


class IdeoneError(Exception):
    pass

class Ideone(object):

    ERROR_OK = 'OK'

    def __init__(self, user, password, api_url=None):
        self.user = user
        self.password = password
        self.api_url = api_url if api_url else 'https://ideone.com/api/1/service.wsdl'
        self._import = Import('http://schemas.xmlsoap.org/soap/encoding/')
        self._doctor = ImportDoctor(self._import)
        self.client = Client(self.api_url, doctor=self._doctor)
        self._language_dict = None

    @staticmethod
    def _transform_to_dict(result):
        """
        Transform the array from Ideone into a Python dictionary.
        """
        result_dict = {}
        property_list = result.item
        for item in property_list:
            result_dict[item.key[0]] = item.value[0]
        return result_dict

    @staticmethod
    def _handle_error(result_dict):
        """
        Raise an exception if the Ideone gave us an error.
        """
        error = result_dict['error']
        if error == Ideone.ERROR_OK:
            return
        else:
            raise IdeoneError(error)

    @staticmethod
    def _collapse_language_array(language_array):
        """
        Convert the Ideone language list into a Python dictionary.
        """
        language_dict = {}
        for language in language_array.item:
            key = language.key[0]
            value = language.value[0]
            language_dict[key] = value

        return language_dict

    def _translate_language_name(self, language_name):
        """
        Translate a human readable langauge name into its Ideone
        integer representation.

        Keyword Arguments
        -----------------

        * langauge_name: a string of the language (e.g. "c++")

        Returns
        -------

        An integer representation of the language.

        Notes
        -----

        We use a local cache of languages if available, else we grab
        the list of languages from Ideone.  We test for a string match
        by comparing prefixes because Ideone includes the language
        compiler name and version number.  Both strings are converted
        to lower case before the comparison.

        Examples
        --------

        >>> ideone_object = Ideone('username', 'password')
        >>> ideone_object._translate_language_name('ada')
        7

        """

        languages = self.languages()
        language_id = None

        # Check for exact match first including the whole version
        # string
        for ideone_index, ideone_language in languages.items():
            if ideone_language.lower() == language_name.lower():
                return ideone_index

        # Check for a match of just the language name without any
        # version information
        simple_languages = dict((k,v.split('(')[0].strip())
                                for (k,v) in languages.items())
        for ideone_index, simple_name in simple_languages.items():
            if simple_name.lower() == language_name.lower():
                return ideone_index

        # Give up, but first find a similar name, suggest it and error
        # out
        language_choices = languages.values() + simple_languages.values()
        similar_choices = difflib.get_close_matches(language_name,
                                                    language_choices,
                                                    n=3,
                                                    cutoff=0.3)
        # Add quotes and delimit with strings for easier to read
        # output
        similar_choices_string = ", ".join(["'" + s + "'"
                                            for s in similar_choices])
        error_string = ("Couldn't match '%s' to an Ideone accepted language.\n"
                        "Did you mean one of the following: %s")
        raise IdeoneError(error_string % (language_name, similar_choices_string))
        


    def create_submission(self, source_code, language_name=None, language_id=None,
                          std_input="", run=True, private=False):
        """
        Create a submission and upload it to Ideone.

        Keyword Arguments
        -----------------

        * source_code: a string of the programs source code
        * language_name: the human readable language string (e.g. 'python')
        * language_id: the ID of the programming language
        * std_input: the string to pass to the program on stdin
        * run: a boolean flag to signifying if Ideone should compile and
               run the program
        * private: a boolean flag signifying the code is private

        Returns
        -------

        A dictionary with the keys error and link.  The link is the
        unique id of the program.  The URL of the submission is
        http://ideone.com/LINK.

        Examples
        --------

        >>> ideone_object = Ideone('username', 'password')
        >>> ideone_object.create_submission('print(42)', language_name='python')
        {'error': 'OK',
         'link' : 'LsSbo'}

        """
        language_id = language_id or self._translate_language_name(language_name)
        result = self.client.service.createSubmission(self.user, self.password,
                                                      source_code, language_id,
                                                      std_input, run, private)
        result_dict = Ideone._transform_to_dict(result)
        Ideone._handle_error(result_dict)
        return result_dict

    def submission_status(self, link):
        """
        Given the unique link of a submission, returns its current
        status.

        Keyword Arguments
        -----------------

        * link: the unique id string of a submission

        Returns
        -------

        A dictionary of the error, the result code and the status
        code.

        Notes
        -----

        Status specifies the stage of execution.

        * status < 0 means the program awaits compilation
        * status == 0 means the program is done
        * status == 1 means the program is being compiled
        * status == 3 means the program is running

        Result specifies how the program finished.

        * result == 0 means not running, the program was submitted
                      with run=False
        * result == 11 means compilation error
        * result == 12 means runtime error
        * result == 13 means timelimit exceeded
        * result == 15 means success
        * result == 17 means memory limit exceeded
        * result == 19 means illegal system call
        * result == 20 means Ideone internal error, submit a bug report



        Examples
        --------

        >>> ideone_object = Ideone('username', 'password')
        >>> ideone_object.submission_status('LsSbo')
        {'error': 'OK',
         'result': 15,
         'status': 0}

        """
        result = self.client.service.getSubmissionStatus(self.user, self.password, link)
        result_dict = Ideone._transform_to_dict(result)
        Ideone._handle_error(result_dict)
        return result_dict

    def submission_details(self, link, with_source=True,
                               with_input=True, with_output=True,
                               with_stderr=True, with_compilation_info=True):
        """
        Return a dictionary of requested details about a submission
        with the id of link.

        Keyword Arguments
        -----------------

        * link: the unique string ID of a submission
        * with_source: should we request the source code
        * with_input: request the program input
        * with_output: request the program output
        * with_stderr: request the error output
        * with_compilation_info: request compilation flags

        Examples
        --------

        >>> ideone_object = Ideone('username', 'password')
        >>> ideone_object.submission_details('LsSbo')
        {'cmpinfo': ,
         'date': "2011-04-18 15:24:14",
         'error': "OK",
         'input': "",
         'langId': 116,
         'langName': "Python 3",
         'langVersion': "python-3.1.2",
         'memory': 5852,
         'output': 42,
         'public': True,
         'result': 15,
         'signal': 0,
         'source': "print(42)",
         'status': 0,
         'stderr': "",
         'time': 0.02}

        """
        result = self.client.service.getSubmissionDetails(self.user, self.password,
                                                          link,
                                                          with_source, with_input,
                                                          with_output, with_stderr,
                                                          with_compilation_info)
        result_dict = Ideone._transform_to_dict(result)
        Ideone._handle_error(result_dict)
        return result_dict

    def languages(self):
        """
        Get a list of supported languages and cache it.

        Examples
        --------

        >>> ideone_object.languages()
        {'error': 'OK',
         'languages': {1: "C++ (gcc-4.3.4)",
                       2: "Pascal (gpc) (gpc 20070904)",
                       ...
                       ...
                       ...
                       125: "Falcon (falcon-0.9.6.6)"}}

        """
        if self._language_dict is None:
            result = self.client.service.getLanguages(self.user, self.password)
            result_dict = Ideone._transform_to_dict(result)
            Ideone._handle_error(result_dict)
            languages = result_dict['languages']
            result_dict['languages'] = Ideone._collapse_language_array(languages)
            self._language_dict = result_dict['languages']
        return self._language_dict

    def test(self):
        """
        A test function that always returns the same thing.

        >>> ideone_object = Ideone('username', 'password')
        >>> ideone_object.test_function()
        {'answerToLifeAndEverything': 42,
         'error': "OK",
         'moreHelp': "ideone.com",
         'oOok': True,
         'pi': 3.14}

        """
        result = self.client.service.testFunction(self.user, self.password)
        result_dict = Ideone._transform_to_dict(result)
        Ideone._handle_error(result_dict)
        return result_dict
