#pragma once

#include <chrono> //since c++11

namespace chrono = std::chrono;

//�ð� ������ Ŭ�����Դϴ�.
class Timer
{
public:
	void start(); //Ÿ�̸Ӹ� �����մϴ�.
	void stop(); //Ÿ�̸Ӹ� �ߴ��մϴ�.
	const Timer& stop_and(); //Ÿ�̸Ӹ� �ߴ��ϰ� �ڱ� �ڽ��� ��ȯ�մϴ�. �ٷ� get �޼������ ���� �˴ϴ�.
	void clear(); //���� �ʱ�ȭ�մϴ�.
public:
	template<class seconds_t>
	long long get_time() const; //���� �޼����� ���ø��Դϴ�.
	long long get_nano() const; //���뼼���� �����Դϴ�.
	long long get_micro() const; //����ũ�μ����� �����Դϴ�.
	long long get_milli() const; //�и������� �����Դϴ�.
	long long get_seconds() const; //������ �����Դϴ�.
	long long get_minutes() const; //�� �����Դϴ�.
	long long get_hours() const; //�ð� �����Դϴ�.
private:
	chrono::time_point<chrono::system_clock> start_point; //���������Դϴ�.
	chrono::time_point<chrono::system_clock> stop_point; //�ߴ������Դϴ�.
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
