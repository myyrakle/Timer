#pragma once

#include <chrono> //since c++11

namespace chrono = std::chrono;

//시간 측정용 클래스입니다.
class Timer
{
public:
	void start(); //타이머를 가동합니다.
	void stop(); //타이머를 중단합니다.
	const Timer& stop_and(); //타이머를 중단하고 자기 자신을 반환합니다. 바로 get 메서드들을 쓰면 됩니다.
	void clear(); //값을 초기화합니다.
public:
	template<class seconds_t>
	long long get_time() const; //측정 메서드의 템플릿입니다.
	long long get_nano() const; //나노세컨드 단위입니다.
	long long get_micro() const; //마이크로세컨드 단위입니다.
	long long get_milli() const; //밀리세컨드 단위입니다.
	long long get_seconds() const; //세컨드 단위입니다.
	long long get_minutes() const; //분 단위입니다.
	long long get_hours() const; //시간 단위입니다.
private:
	chrono::time_point<chrono::system_clock> start_point; //시작지점입니다.
	chrono::time_point<chrono::system_clock> stop_point; //중단지점입니다.
public:
	Timer() = default;
	Timer(const Timer&) = default;
	Timer(Timer&&) = default;
	Timer& operator= (const Timer&) = default;
	Timer& operator= (Timer&&) = default;
	virtual ~Timer() = default;
};

template<class seconds_t>
inline long long Timer::get_time() const
{
	return chrono::duration_cast<seconds_t>(stop_point - start_point).count();
	return 0;
}
