// try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <thread>
#include <iostream>

void fun()
{
	// dead loop
	for(int i=0;i<10000;i++)
		std::cout << "Hello threading!\n";
	return;
}

int main()
{
	int x = 1;
	// create thread object
	std::thread thrd(fun);
	std::cout << "thrd actully do its work, running\n";
	//transfer out the ownership of from object thrd
	thrd.detach();
	// check thrd property
	bool check = thrd.joinable();
	std::cout << "back to main thread\n";

	// safely exit application, but the other thread is out of control
    return 0;
}
