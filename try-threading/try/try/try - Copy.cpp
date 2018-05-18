// try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <thread>
#include <iostream>

void fun()
{
	// dead loop
	for(int i=0;i<10;i++)
		std::cout << "Hello threading!\n";
	return;
}

int main()
{
	int x = 1;
	// create thread object
	std::thread thrd(fun);
	std::cout << "thrd actully do its work, running\n";
	//join
	//thrd.join();
	//If not join, system will crash when destroy this thread as quit the calling function

	bool check = thrd.joinable();
	std::cout << "back to main thread\n";

    return 0;
}

