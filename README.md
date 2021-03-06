# Timer  

![](https://img.shields.io/badge/language-C%2B%2B-red) ![](https://img.shields.io/badge/version-1.0.0-brightgreen) [![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/myyrakle/Timer/blob/master/LICENSE) 
  
실행시간 측정용 클래스입니다.  
  
  
생성은 그냥 하면 됩니다. 이런 식으로  
**Timer timer;**  
  
  
  
메서드는 아래와 같습니다.
  
**void start();**  
타이머를 가동합니다.
  
**void stop();**  
타이머를 중단합니다.
  
**const Timer& stop_and();**  
타이머를 중단하고 자기 자신을 반환합니다.  
바로 get 메서드들을 쓸 수 있습니다.  
  
**void clear();**  
측정한 내부 값을 초기화합니다.  
  
**template\<class seconds_t\>  
long long get_time() const;**  
측정 메서드의 기본 템플릿입니다.  
second_t가 측정값을 변환할 단위입니다. std::chrono에 존재하는 seconds 등을 넣으면 됩니다.  
이 템플릿을 통해 측정값을 추출해도 되지만, 권장하지 않습니다.  
  
**long long get_nano() const;**  
나노세컨드 단위로 측정값을 반환합니다.  
  
**long long get_micro() const;**  
마이크로세컨드 단위로 측정값을 반환합니다.  
  
**long long get_milli() const;**  
밀리세컨드 단위로 측정값을 반환합니다.  
  
**long long get_seconds() const;**  
세컨드 단위로 측정값을 반환합니다.  
  
**long long get_minutes() const;**  
분 단위로 측정값을 반환합니다.  
  
**long long get_hours() const;**  
시간 단위로 측정값을 반환합니다.  
  
