프로그래밍에서 모듈은 특정 기능을 갖춘 소프트웨어 조각입니다. 예를 들어, 탁구 게임을 만들 때 하나의 모듈은 게임 로직을 담당하고 다른 모듈은 화면에 게임을 그리는 역할을 할 수 있습니다. 각 모듈은 별도로 편집할 수 있는 다른 파일로 구성됩니다.

### 모듈 작성하기

Python에서 모듈은 .py 확장자를 가진 Python 파일에 불과합니다. 모듈의 이름은 파일 이름과 동일합니다. Python 모듈은 정의되고 구현된 함수, 클래스 또는 변수를 포함할 수 있습니다. 위 예시에는 두 파일이 포함되어 있습니다:

mygame/

- mygame/game.py

- mygame/draw.py

Python 스크립트 `game.py`는 게임을 구현합니다. 이 스크립트는 `draw.py` 파일로부터 `draw_game` 함수를 사용합니다. 즉, 게임을 화면에 그리는 로직을 구현한 `draw` 모듈을 사용합니다.

모듈은 `import` 명령어를 사용하여 다른 모듈로부터 가져올 수 있습니다. 이 예에서 `game.py` 스크립트는 다음과 같이 보일 수 있습니다:

```python
# game.py
# draw 모듈을 가져옵니다
import draw
    
def play_game():
    ...
    
def main():
    result = play_game()
    draw.draw_game(result)
        
# 이 의미는 이 스크립트가 실행되면 main()이 실행된다는 것입니다
if __name__ == '__main__':
    main()
```

`draw` 모듈은 다음과 같이 보일 수 있습니다:

```python
# draw.py
    
def draw_game():
    ...

def clear_screen(screen):
    ...
```

이 예에서, `game` 모듈은 `draw` 모듈을 가져와서 해당 모듈에 구현된 함수를 사용할 수 있습니다. `main` 함수는 로컬 함수 `play_game`을 사용해 게임을 실행하고, 이후 `draw` 모듈에 구현된 `draw_game` 함수를 사용해 게임 결과를 그립니다. `draw` 모듈의 `draw_game` 함수를 사용하려면, 점 연산자를 사용해 함수가 구현된 모듈을 지정해야 합니다. `game` 모듈에서 `draw_game` 함수를 참조하려면 `draw` 모듈을 가져오고 `draw.draw_game()`을 호출해야 합니다.

`import draw` 지시어가 실행되면 Python 인터프리터는 스크립트가 실행된 디렉토리에서 모듈 이름과 `.py` 접미사를 가진 파일을 찾습니다. 이 경우 `draw.py`를 찾을 것입니다. 파일이 발견되면 가져옵니다. 발견되지 않으면, 내장 모듈을 계속 찾습니다.

모듈을 import할 때 `.pyc` 파일이 생성되는 것을 눈치챘을 것입니다. 이는 컴파일된 Python 파일입니다. Python은 모듈이 로드될 때마다 파일을 구문 분석하지 않도록 Python 바이트코드로 파일을 컴파일합니다. `.pyc` 파일이 존재하면 사용자는 이를 투명하게 로드합니다.

### 현재 네임스페이스에 모듈 객체 가져오기

네임스페이스는 모든 객체가 이름이 지정되고 Python에서 접근할 수 있는 시스템입니다. 우리는 `draw_game` 함수를 `from` 명령을 사용해 메인 스크립트의 네임스페이스에 가져옵니다.

```python
# game.py
# draw 모듈을 가져옵니다
from draw import draw_game
    
def main():
    result = play_game()
    draw_game(result)
```

이 예에서 모듈 이름이 `draw_game` 앞에 없다는 것을 눈치챘을 것입니다. 왜냐하면 `import` 명령을 사용해 모듈 이름을 명시했기 때문입니다.

이 표기의 장점은 모듈을 반복해서 참조할 필요가 없다는 것입니다. 그러나 네임스페이스는 동일한 이름을 가진 두 개의 객체를 가질 수 없으므로 `import` 명령은 네임스페이스의 기존 객체를 대체할 수 있습니다.

### 모듈의 모든 객체 가져오기

다음과 같이 `import *` 명령을 사용해 모듈의 모든 객체를 가져올 수 있습니다:

```python
# game.py
# draw 모듈을 가져옵니다
from draw import *
    
def main():
    result = play_game()
    draw_game(result)
```

이 방법은 모듈의 변경이 가져오는 모듈에 영향을 미칠 수 있기 때문에 다소 위험할 수 있지만, 더 짧고 모듈에서 가져올 모든 객체를 명시할 필요가 없습니다.

### 사용자 정의 가져오기 이름

모듈은 원하는 어떤 이름으로도 로드할 수 있습니다. 이는 조건부로 모듈을 가져와서 코드의 나머지 부분에서 동일한 이름을 사용하는 경우 유용합니다.

예를 들어, 약간 다른 이름을 가진 두 개의 `draw` 모듈이 있는 경우 다음과 같이 할 수 있습니다:

```python
# game.py
# draw 모듈을 가져옵니다
if visual_mode:
    # 비주얼 모드에서는 그래픽을 사용해 그립니다
    import draw_visual as draw
else:
    # 텍스트 모드에서는 텍스트를 출력합니다
    import draw_textual as draw
    
def main():
    result = play_game()
    # visual_mode에 따라 시각적 또는 텍스트 모드가 될 수 있습니다
    draw.draw_game(result)
```

### 모듈 초기화

모듈이 실행중인 Python 스크립트에 처음 로드될 때, 모듈의 코드를 한 번 실행하여 초기화합니다. 코드의 다른 모듈이 동일한 모듈을 다시 가져오면 다시 로드되지 않으며, 모듈 내 로컬 변수는 "싱글톤"으로 작동하여 한 번만 초기화됩니다.

이렇게 해서 객체를 초기화할 수 있습니다. 예를 들어:

```python
# draw.py
    
def draw_game():
    # 화면을 클리어할 때 이 모듈에서 초기화된 메인 화면 객체를 사용할 수 있습니다
    clear_screen(main_screen)
    ...

def clear_screen(screen):
    ...
        
class Screen():
    ...

# 메인 화면을 싱글톤으로 초기화합니다
main_screen = Screen()
```

### 모듈 로드 경로 확장

Python 인터프리터에 기본 로컬 디렉토리와 내장 모듈 외에 모듈을 어디서 찾아야 하는지 몇 가지 방법이 있습니다. 환경 변수 `PYTHONPATH`를 사용하여 추가 디렉토리를 지정할 수 있습니다:

```bash
PYTHONPATH=/foo python game.py
```

이 명령은 `game.py`를 실행하며 스크립트가 로컬 디렉토리와 함께 `foo` 디렉토리에서 모듈을 로드할 수 있게 합니다.

`sys.path.append` 함수를 사용할 수도 있습니다. `import` 명령을 실행하기 *전*에 실행합니다:

```python
sys.path.append("/foo")
```

이제 `foo` 디렉토리가 모듈을 찾는 경로 목록에 추가되었습니다.

### 내장 모듈 탐색하기

Python 표준 라이브러리의 내장 모듈 전체 목록은 [여기](https://docs.python.org/3/library/)에서 확인하세요.

Python에서 모듈을 탐색할 때 매우 중요한 두 가지 함수는 `dir`과 `help` 함수입니다.

URLs에서 데이터를 읽도록 해주는 모듈 urllib을 가져오기 위해 `import` 명령을 사용합니다:

```python
# 라이브러리를 가져옵니다
import urllib

# 사용합니다
urllib.urlopen(...)
```

각 모듈에 구현된 함수를 `dir` 함수를 사용하여 찾을 수 있습니다:

```python
>>> import urllib
>>> dir(urllib)
# ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', '_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 'urlopen', 'urlretrieve']
```

모듈에 사용하려는 함수를 찾았을 때, Python 인터프리터를 사용해 `help` 함수를 통해 더 많은 정보를 읽을 수 있습니다:

```python
help(urllib.urlopen)
```

### 패키지 작성하기

패키지는 여러 패키지와 모듈을 포함한 네임스페이스입니다. 패키지는 특정 요구 사항을 갖춘 디렉토리일 뿐입니다.

Python의 각 패키지는 `__init__.py`라는 특별한 파일을 반드시 포함하는 디렉토리입니다. 이 파일은 비어 있을 수 있으며, 디렉토리가 Python 패키지임을 나타냅니다. 이를 통해 모듈과 동일한 방식으로 가져올 수 있습니다.

`foo`라는 패키지 이름을 나타내는 디렉토리를 만들면 그 패키지 안에 `bar`라는 모듈을 만들 수 있습니다. 그런 다음 `foo` 디렉토리에 `__init__.py` 파일을 추가합니다.

모듈 `bar`를 사용하려면 다음 두 가지 방법으로 가져올 수 있습니다:

```python
import foo.bar
```

또는:

```python
from foo import bar
```

위 첫 번째 예제에서, 우리는 모듈 `bar`에 접근할 때마다 `foo` 접두사를 사용해야 합니다. 두 번째 예제에서는 모듈의 네임스페이스에 모듈을 가져왔기 때문에 그렇지 않습니다.

`__init__.py` 파일은 패키지가 API로 내보낼 모듈을 결정하고, 다른 모듈은 내부용으로 유지하는 방법으로 `__all__` 변수를 재정의할 수 있습니다:

```python
__init__.py:

__all__ = ["bar"]
```

Exercise
--------

이번 연습 문제에서는 `re` 모듈의 모든 함수 중 "find"라는 단어가 포함된 알파벳순 정렬된 목록을 출력하세요.