#include "pch.h"
#include "Timer.h"


#include <iostream>

int main()
{
	Timer timer;
	timer.start();
	auto time = timer.stop_and().get_nano();
	std::cout << time;
}