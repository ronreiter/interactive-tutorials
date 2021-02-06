# This program is free software; you can redistribute it and/or modify
# it under the terms of the (LGPL) GNU Lesser General Public License as
# published by the Free Software Foundation; either version 3 of the
# License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Library Lesser General Public License for more details at
# ( http://www.gnu.org/licenses/lgpl.html ).
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
# written by: Glen Walker
# based on code by: Nathan Van Gheem (vangheem@gmail.com)

"""
The I{date} module provides classes for converstion between XML dates and
Python objects.
"""


__all__ = ('Date', 'Time', 'DateTime', 'FixedOffsetTimezone', 'UtcTimezone',
           'LocalTimezone')


import time
import datetime
import re

from suds.compat import unicode

SNIPPET_DATE = r'(?P<year>\d{1,})-(?P<month>\d{1,2})-(?P<day>\d{1,2})'
SNIPPET_TIME = r'(?P<hour>\d{1,2}):(?P<minute>\d{1,2}):(?P<second>\d{1,2})' + \
               r'(?:\.(?P<subsecond>\d+))?'
SNIPPET_ZONE = r'(?:(?P<tz_sign>[-+])(?P<tz_hour>\d{1,2})' + \
               r'(?::?(?P<tz_minute>\d{1,2})(?::?(?P<tz_second>\d{1,2}))?)?)' + \
               r'|(?P<tz_utc>[Zz])'

PATTERN_DATE = r'^%s(?:%s)?$' % (SNIPPET_DATE, SNIPPET_ZONE)
PATTERN_TIME = r'^%s(?:%s)?$' % (SNIPPET_TIME, SNIPPET_ZONE)
PATTERN_DATETIME = r'^%s[T ]%s(?:%s)?$' % (SNIPPET_DATE, SNIPPET_TIME,
                                           SNIPPET_ZONE)

RE_DATE = re.compile(PATTERN_DATE)
RE_TIME = re.compile(PATTERN_TIME)
RE_DATETIME = re.compile(PATTERN_DATETIME)


class Date(object):
    """An XML date object supporting the xsd:date datatype.

    @ivar value: The object value.
    @type value: B{datetime}.I{date}

    """
    __slots__ = ('value', )

    def __init__(self, value):
        """Constructor.

        @param value: The date value of the object.
        @type value: (datetime.date|str)
        @raise ValueError: When I{value} is invalid.

        """
        if isinstance(value, datetime.date):
            self.value = value
        elif isinstance(value, str):
            self.value = self.parse(value)
        else:
            raise ValueError('invalid type for Date(): %s' % (type(value), ))

    @staticmethod
    def parse(value):
        """Parse the string date.

        This supports the subset of ISO8601 used by xsd:date, but is lenient
        with what is accepted, handling most reasonable syntax.

        Any timezone is parsed but ignored  because a) it's meaningless without
        a time and b) B{datetime}.I{date} does not support a tzinfo property.

        @param value: A date string.
        @type value: str
        @return: A date object.
        @rtype: B{datetime}.I{date}

        """
        match_result = RE_DATE.match(value)
        if match_result is None:
            raise ValueError('date data has invalid format "%s"' % value)

        value = date_from_match(match_result)

        return value

    def __str__(self):
        return self.value.isoformat()

    def __unicode__(self):
        return self.value.isoformat()


class Time(object):
    """An XML time object supporting the xsd:time datatype.

    @ivar time: The object value.
    @type time: B{datetime}.I{time}

    """
    __slots__ = ('value', )

    def __init__(self, value):
        """Constructor.

        @param value: The time value of the object.
        @type value: (dateime.time|str)
        @raise ValueError: When I{value} is invalid.

        """
        if isinstance(value, datetime.time):
            self.value = value
        elif isinstance(value, str):
            self.value = self.parse(value)
        else:
            raise ValueError('invalid type for Time(): %s' % (type(value), ))

    @staticmethod
    def parse(value):
        """Parse the string date.

        This supports the subset of ISO8601 used by xsd:time, but is lenient
        with what is accepted, handling most reasonable syntax.

        @param value: A time string.
        @type value: str
        @return: A time object.
        @rtype: B{datetime}.I{time}

        """
        match_result = RE_TIME.match(value)
        if match_result is None:
            raise ValueError('date data has invalid format "%s"' % (value, ))

        date = time_from_match(match_result)
        tzinfo = tzinfo_from_match(match_result)

        value = date.replace(tzinfo=tzinfo)

        return value

    def __str__(self):
        return self.value.isoformat()

    def __unicode__(self):
        return self.value.isoformat()


class DateTime(object):
    """An XML datetime object supporting the xsd:dateTime datatype.

    @ivar value: The object value.
    @type value: B{datetime}.I{datetime}

    """
    __slots__ = ('value', )

    def __init__(self, value):
        """Constructor.

        @param value: The datetime value of the object.
        @type value: (datetime.datetime|str)
        @raise ValueError: When I{value} is invalid.

        """
        if isinstance(value, datetime.datetime):
            self.value = value
        elif isinstance(value, str):
            self.value = self.parse(value)
        else:
            raise ValueError('invalid type for DateTime(): %s' % type(value))

    @staticmethod
    def parse(value):
        """Parse the string datetime.

        This supports the subset of ISO8601 used by xsd:dateTime, but is
        lenient with what is accepted, handling most reasonable syntax.

        @param value: A datetime string.
        @type value: str
        @return: A datetime object.
        @rtype: B{datetime}.I{datetime}

        """
        match_result = RE_DATETIME.match(value)
        if match_result is None:
            raise ValueError('date data has invalid format "%s"' % (value, ))

        date = date_from_match(match_result)
        time = time_from_match(match_result)
        tzinfo = tzinfo_from_match(match_result)

        value = datetime.datetime.combine(date, time)
        value = value.replace(tzinfo=tzinfo)

        return value

    def __str__(self):
        return self.value.isoformat()

    def __unicode__(self):
        return self.value.isoformat()


class FixedOffsetTimezone(datetime.tzinfo):
    """A timezone with a fixed offset and no daylight savings adjustment.

    http://docs.python.org/library/datetime.html#datetime.tzinfo

    """

    def __init__(self, offset):
        """Constructor.

        @ivar offset: The fixed offset of the timezone.
        @type offset: B{datetime}.I{timedelta}

        """
        self.__offset = offset

    def utcoffset(self, dt):
        """
        http://docs.python.org/library/datetime.html#datetime.tzinfo.utcoffset

        """
        return self.__offset

    def tzname(self, dt):
        """
        http://docs.python.org/library/datetime.html#datetime.tzinfo.tzname

        """
        sign = '+'
        if self.__offset < datetime.timedelta():
            sign = '-'

        # total_seconds was introduced in Python 2.7
        if hasattr(self.__offset, 'total_seconds'):
            total_seconds = self.__offset.total_seconds()
        else:
            total_seconds = (self.__offset.days * 24 * 60 * 60) + \
                            (self.__offset.seconds) + \
                            (self.__offset.microseconds / 1000000.0)

        hours = total_seconds // (60 * 60)
        total_seconds -= hours * 60 * 60

        minutes = total_seconds // 60
        total_seconds -= minutes * 60

        seconds = total_seconds // 1
        total_seconds -= seconds

        if seconds:
            return '%s%02d:%02d:%02d' % (sign, hours, minutes, seconds)
        else:
            return '%s%02d:%02d' % (sign, hours, minutes)

    def dst(self, dt):
        """
        http://docs.python.org/library/datetime.html#datetime.tzinfo.dst

        """
        return datetime.timedelta(0)

    def __str__(self):
        return 'FixedOffsetTimezone %s' % (self.tzname(None), )

    def __unicode__(self):
        return 'FixedOffsetTimezone %s' % (self.tzname(None), )


class UtcTimezone(FixedOffsetTimezone):
    """The UTC timezone.

    http://docs.python.org/library/datetime.html#datetime.tzinfo

    """

    def __init__(self):
        """Constructor."""
        FixedOffsetTimezone.__init__(self, datetime.timedelta(0))

    def tzname(self, dt):
        """
        http://docs.python.org/library/datetime.html#datetime.tzinfo.tzname

        """
        return 'UTC'

    def __str__(self):
        return 'UtcTimezone'

    def __unicode__(self):
        return 'UtcTimezone'


class LocalTimezone(datetime.tzinfo):
    """The local timezone of the operating system.

    http://docs.python.org/library/datetime.html#datetime.tzinfo

    """

    def __init__(self):
        """Constructor."""
        self.__offset = datetime.timedelta(seconds=-time.timezone)
        if time.daylight:
            self.__dst_offset = datetime.timedelta(seconds=-time.altzone)
        else:
            self.__dst_offset = None

    def utcoffset(self, dt):
        """
        http://docs.python.org/library/datetime.html#datetime.tzinfo.utcoffset

        """
        if self.__is_daylight_time(dt):
            return self.__dst_offset
        else:
            return self.__offset

    def dst(self, dt):
        """
        http://docs.python.org/library/datetime.html#datetime.tzinfo.dst

        """
        if self.__is_daylight_time(dt):
            return self.__dst_offset - self.__offset
        else:
            return datetime.timedelta(0)

    def tzname(self, dt):
        """
        http://docs.python.org/library/datetime.html#datetime.tzinfo.tzname

        """
        if self.__is_daylight_time(dt):
            return time.tzname[1]
        else:
            return time.tzname[0]

    def __is_daylight_time(self, dt):
        if not time.daylight:
            return False
        time_tuple = dt.replace(tzinfo=None).timetuple()
        time_tuple = time.localtime(time.mktime(time_tuple))
        return time_tuple.tm_isdst > 0

    def __str__(self):
        dt = datetime.datetime.now()
        return 'LocalTimezone %s offset: %s dst: %s' \
            % (self.tzname(dt), self.utcoffset(dt), self.dst(dt))

    def __unicode__(self):
        dt = datetime.datetime.now()
        return 'LocalTimezone %s offset: %s dst: %s' \
            % (self.tzname(dt), self.utcoffset(dt), self.dst(dt))


def date_from_match(match_object):
    """Create a date object from a regular expression match.

    The regular expression match is expected to be from RE_DATE or RE_DATETIME.

    @param match_object: The regular expression match.
    @type value: B{re}.I{MatchObject}
    @return: A date object.
    @rtype: B{datetime}.I{date}

    """
    year = int(match_object.group('year'))
    month = int(match_object.group('month'))
    day = int(match_object.group('day'))

    return datetime.date(year, month, day)


def time_from_match(match_object):
    """Create a time object from a regular expression match.

    The regular expression match is expected to be from RE_TIME or RE_DATETIME.

    @param match_object: The regular expression match.
    @type value: B{re}.I{MatchObject}
    @return: A date object.
    @rtype: B{datetime}.I{time}

    """
    hour = int(match_object.group('hour'))
    minute = int(match_object.group('minute'))
    second = int(match_object.group('second'))
    subsecond = match_object.group('subsecond')

    microsecond = 0
    if subsecond is not None:
        subsecond_denominator = 10.0 ** len(subsecond)
        subsecond = int(subsecond)
        microsecond = subsecond * (1000000 / subsecond_denominator)
        microsecond = int(round(microsecond))

    return datetime.time(hour, minute, second, microsecond)


def tzinfo_from_match(match_object):
    """Create a timezone information object from a regular expression match.

    The regular expression match is expected to be from RE_DATE, RE_TIME or
    RE_DATETIME.

    @param match_object: The regular expression match.
    @type value: B{re}.I{MatchObject}
    @return: A timezone information object.
    @rtype: B{datetime}.I{tzinfo}

    """
    tz_utc = match_object.group('tz_utc')
    tz_sign = match_object.group('tz_sign')
    tz_hour = int(match_object.group('tz_hour') or 0)
    tz_minute = int(match_object.group('tz_minute') or 0)
    tz_second = int(match_object.group('tz_second') or 0)

    tzinfo = None
    if tz_utc is not None:
        tzinfo = UtcTimezone()
    elif tz_sign is not None:
        tz_delta = datetime.timedelta(hours=tz_hour,
                                      minutes=tz_minute,
                                      seconds=tz_second)
        if tz_delta == datetime.timedelta():
            tzinfo = UtcTimezone()
        else:
            tz_multiplier = int('%s1' % (tz_sign, ))
            tz_delta = tz_multiplier * tz_delta
            tzinfo = FixedOffsetTimezone(tz_delta)

    return tzinfo
