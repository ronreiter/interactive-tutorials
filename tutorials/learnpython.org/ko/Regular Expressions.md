Regular Expressions (sometime shortened to regexp, regex, or re) are a
tool for matching patterns in text. In Python, we have the re module.
The applications for regular expressions are wide-spread, but they are
fairly complex, so when contemplating using a regex for a certain task,
think about alternatives, and come to regexes as a last resort.

정규 표현식(때때로 regexp, regex 또는 re로 줄여서 부르기도 함)은 텍스트에서 패턴을 매칭하는 도구입니다. Python에서는 re 모듈이 있습니다. 정규 표현식의 응용은 광범위하지만, 다소 복잡하기 때문에 특정 작업에 정규식을 사용해야 할 경우에는 대안을 고려하고, 정규식은 최후의 수단으로 사용하는 것을 추천합니다.

An example regex is `r"^(From|To|Cc).*?python-list@python.org"` Now for an
explanation:
the caret `^` matches text at the beginning of a line. The following
group, the part with `(From|To|Cc)` means that the line has to start with
one of the words that are separated by the pipe `|`. That is called
the OR operator, and the regex will match if the line starts with any
of the words in the group. The `.*?` means to un-greedily match any
number of  characters, except the newline `\n` character. The un-greedy
part means to match as few repetitions as possible. The `.` character
means any non-newline character, the `*` means to repeat 0 or more
times, and the `?` character makes it un-greedy.

예제 정규식은 `r"^(From|To|Cc).*?python-list@python.org"`입니다. 이제 설명하겠습니다:
캐럿 `^`는 줄의 시작 지점에 있는 텍스트를 매치합니다. 그 다음 그룹인 `(From|To|Cc)` 부분은 해당 줄이 파이프 `|`로 분리된 단어 중 하나로 시작해야 함을 의미합니다. 이는 OR 연산자로 불리며, 그룹 내의 어느 단어로 줄이 시작하면 정규식이 매치됩니다. `.*?`는 개행 문자 `\n`을 제외한 임의의 개수의 문자를 탐욕스럽지 않게(un-greedy) 매치한다는 의미입니다. 탐욕스럽지 않다는 점은 가능한 한 적은 반복을 매치한다는 것을 의미합니다. `.` 문자는 개행 문자가 아닌 어떤 문자도 의미하고, `*`는 0번 이상 반복을 의미합니다. `?` 문자는 이를 탐욕스럽지 않게 만듭니다.

So, the following lines would be matched by that regex:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

따라서, 다음 줄들은 해당 정규식에 의해 매칭됩니다:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

A complete reference for the re syntax is available at the [python
docs](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

re 문법에 대한 전체 참조는 [파이썬 문서](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax")에서 확인할 수 있습니다.

As an example of a "proper" email-matching regex (like the one in the
exercise), see [this](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

"적절한" 이메일 매칭 정규식의 예제(연습처럼)를 보려면 [여기](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)를 참조하세요.