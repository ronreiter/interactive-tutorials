프로그래밍에서 모듈은 특정 기능을 가진 소프트웨어의 한 부분입니다. 예를 들어, 핑퐁 게임을 만들 때 하나의 모듈은 게임 로직을 담당하고 또 다른 모듈은 화면에 게임을 그리는 역할을 할 수 있습니다. 각 모듈은 각각 다른 파일로 구성되어 있으며, 별도로 편집할 수 있습니다.

### 모듈 작성

Python의 모듈은 .py 확장자를 가진 Python 파일일 뿐입니다. 모듈의 이름은 파일 이름과 동일합니다. Python 모듈에는 함수, 클래스 또는 변수의 집합이 정의되고 구현될 수 있습니다. 위 예제에는 두 개의 파일이 포함됩니다:

mygame/

- mygame/game.py

- mygame/draw.py

Python 스크립트 `game.py`는 게임을 구현합니다. 이는 `draw.py` 파일에서 `draw_game` 함수를 사용하며, 즉 화면에 게임을 그리는 로직을 구현한 `draw` 모듈을 사용합니다.

모듈은 `import` 명령어를 사용하여 다른 모듈에서 가져옵니다. 이 예제에서 `game.py` 스크립트는 다음과 같이 보일 수 있습니다:

```python
# game.py
# draw 모듈을 import합니다
import draw

def play_game():
    ...

def main():
    result = play_game()
    draw.draw_game(result)
    
# 이 스크립트가 실행되면
# main()이 실행됩니다
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

이 예제에서 `game` 모듈은 `draw` 모듈을 import하여 해당 모듈에 구현된 함수를 사용할 수 있도록 합니다. `main` 함수는 로컬 함수 `play_game`을 사용하여 게임을 실행한 다음, `draw` 모듈에 구현된 `draw_game`이라는 함수를 사용하여 게임 결과를 그립니다. `draw` 모듈의 `draw_game` 함수를 사용하려면 도트 연산자를 사용하여 함수가 구현된 모듈을 지정해야 합니다. `game` 모듈에서 `draw_game` 함수를 참조하려면 `draw` 모듈을 import한 다음 `draw.draw_game()`을 호출해야 합니다.

`import draw` 지시문이 실행될 때, Python 인터프리터는 스크립트가 실행되는 디렉터리에서 모듈 이름과 `.py` 접미사가 있는 파일을 찾습니다. 이 경우 `draw.py`를 찾게 됩니다. 파일이 발견되면 import됩니다. 발견되지 않으면 내장 모듈을 계속해서 찾습니다.

모듈을 import할 때 `.pyc` 파일이 생성된다는 것을 아마도 눈치챘을 것입니다. 이것은 컴파일된 Python 파일입니다. Python은 모듈이 로드될 때마다 파일을 파싱하지 않도록 Python 바이트코드로 파일을 컴파일합니다. `.pyc` 파일이 존재하면 `.py` 파일 대신 로드됩니다. 이 과정은 사용자에게 투명하게 이루어집니다.

### 현재 네임스페이스에 모듈 객체 import

네임스페이스는 Python에서 각 객체에 이름이 부여되고 접근할 수 있는 시스템입니다. 우리는 `from` 명령어를 사용하여 함수 `draw_game`을 메인 스크립트의 네임스페이스에 import합니다.

```python
# game.py
# draw 모듈을 import합니다
from draw import draw_game

def main():
    result = play_game()
    draw_game(result)
```

이 예제에서 모듈 이름이 `draw_game` 앞에 오지 않는 이유는 `import` 명령어를 사용하여 모듈 이름을 지정했기 때문입니다.

이 표기법의 장점은 모듈을 계속해서 참조할 필요가 없다는 것입니다. 그러나 네임스페이스는 같은 이름을 가진 두 개의 객체를 가질 수 없으므로 `import` 명령어가 네임스페이스의 기존 객체를 대체할 수 있습니다.

### 모듈의 모든 객체 import

`import *` 명령어를 사용하여 모듈의 모든 객체를 다음과 같이 import할 수 있습니다:

```python
# game.py
# draw 모듈을 import합니다
from draw import *

def main():
    result = play_game()
    draw_game(result)
```

이 방법은 약간 위험할 수 있으며, 모듈의 수정이 import하는 모듈에 영향을 미칠 수 있지만 짧고 모듈에서 import하려는 모든 객체를 지정할 필요가 없습니다.

### 사용자 지정 import 이름

모듈은 원하는 이름으로 로드할 수 있습니다. 이것은 조건부로 모듈을 import하여 코드의 나머지 부분에서 동일한 이름을 사용할 때 유용합니다.

예를 들어, 약간 다른 이름을 가진 두 개의 `draw` 모듈이 있는 경우 다음과 같이 할 수 있습니다:

```python
# game.py
# draw 모듈을 import합니다
if visual_mode:
    # 시각 모드에서는 그래픽을 사용하여 그립니다
    import draw_visual as draw
else:
    # 텍스트 모드에서는 텍스트를 출력합니다.
    import draw_textual as draw

def main():
    result = play_game()
    # visual_mode에 따라 시각적 또는 텍스트로 표시할 수 있습니다
    draw.draw_game(result)
```

### 모듈 초기화

모듈이 실행 중인 Python 스크립트에 처음 로드될 때, 모듈 내의 코드를 한 번 실행하여 초기화됩니다. 코드에서 동일한 모듈을 다른 모듈이 다시 import하면 다시 로드되지 않으므로, 모듈 내부의 로컬 변수는 "싱글턴"처럼 작동하여 한 번만 초기화됩니다. 

이를 사용하여 객체를 초기화할 수 있습니다. 예를 들어:

```python
# draw.py

def draw_game():
    # 화면을 지울 때 이 모듈에서 초기화된 기본 화면 객체를 사용할 수 있습니다
    clear_screen(main_screen)
    ...

def clear_screen(screen):
    ...
    
class Screen():
    ...

# main_screen을 싱글턴으로 초기화합니다
main_screen = Screen()
```

### 모듈 로드 경로 확장

로컬 디렉터리 및 내장 모듈 외에도 Python 인터프리터가 모듈을 찾을 경로를 지정하는 몇 가지 방법이 있습니다. 환경 변수 `PYTHONPATH`를 사용하여 모듈을 찾을 추가 디렉토리를 다음과 같이 지정할 수 있습니다:

```shell
PYTHONPATH=/foo python game.py
```

이렇게 하면 `game.py`가 실행되며 스크립트는 로컬 디렉터리 뿐만 아니라 `foo` 디렉터리에서 모듈을 로드할 수 있습니다.

또한 `sys.path.append` 함수를 사용할 수 있습니다. `import` 명령어를 실행 *하기 전에* 실행합니다:

```python
sys.path.append("/foo")
```

이제 `foo` 디렉터리가 모듈을 찾을 경로 목록에 추가되었습니다.

### 내장 모듈 탐색

Python 표준 라이브러리에 있는 내장 모듈의 전체 목록은 [여기](https://docs.python.org/3/library/)에서 확인하십시오.

Python에서 모듈을 탐색할 때 매우 유용한 두 가지 중요한 함수는 `dir`과 `help` 함수입니다.

URL에서 데이터를 읽을 수 있도록 하는 `urllib` 모듈을 import하려면 다음과 같이 모듈을 import합니다:

```python
# 라이브러리 import
import urllib

# 사용
urllib.urlopen(...)
```

각 모듈에 구현된 함수가 무엇인지 `dir` 함수를 사용하여 확인할 수 있습니다:

```python
>>> import urllib
>>> dir(urllib)
['ContentTooShortError', 'FancyURLopener', ..., 'urlopen', 'urlretrieve']
```

모듈에서 사용하고자 하는 함수를 찾으면 Python 해석기를 사용하여 `help` 함수로 더 많은 정보를 읽을 수 있습니다:

```python
help(urllib.urlopen)
```

### 패키지 작성

패키지는 여러 패키지와 모듈을 포함하는 네임스페이스입니다. 특정 요구 사항이 있는 디렉터리일 뿐입니다.

Python의 각 패키지는 특수한 파일인 `__init__.py`가 포함된 디렉터리 **여야 합니다**. 이 파일은 비어있을 수 있으며, 해당 디렉터리가 Python 패키지임을 나타냅니다. 이렇게 하면 모듈처럼 import될 수 있습니다.

`foo`라는 디렉터리를 생성하여 패키지 이름을 지정하면, 그 안에 `bar`라는 모듈을 생성할 수 있습니다. 그런 다음 `foo` 디렉터리에 `__init__.py` 파일을 추가합니다.

`bar` 모듈을 사용하려면 두 가지 방법으로 import할 수 있습니다:

```python
import foo.bar
```

또는:

```python
from foo import bar
```

위의 첫 번째 예제에서는 `bar` 모듈에 접근할 때마다 `foo` 접두사를 사용해야 합니다. 두 번째 예제에서는 그렇지 않습니다. 왜냐하면 우리가 모듈을 현재 모듈의 네임스페이스에 import했기 때문입니다.

`__init__.py` 파일은 또한 `__all__` 변수를 덮어씌워 패키지가 API로 내보내는 모듈을 결정하며, 다른 모듈을 내부적으로 유지합니다:

```python
__init__.py:

__all__ = ["bar"]
```

Exercise
--------

이 연습에서는 `re` 모듈에 있는 'find'라는 단어를 포함하는 모든 함수의 알파벳순으로 정렬된 목록을 출력합니다.