// building__threads.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include <iostream>
#include <thread>

void hello()
{
	std::cout << "Hello Concurrent World\n";
}

int main()
{
	std::thread t(hello);
	t.join();
}
