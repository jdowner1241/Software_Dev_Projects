// C++ Practice.cpp : Defines the entry point for the console application.
// A complete C++ program

#include "stdafx.h"
#include <iostream>


int main()
{
	int pause(1);

	// Ex1_01.cpp
	
	std::cout << "Hey, I'm Jamario, Merry Christmas."
			  << std::endl;

	//Ex2_1.cpp
	//This will display values of given Variables.
	int Ex2_1();
	{
		const int defaultValue{1};
		unsigned char randomValue{};

		std::cout << "The Default value for this program is: " << defaultValue << std::endl;
		std::cout << "The random value is: " << randomValue << std::endl;

	}

	
	std::cout << "(please enter any value to end the program.)";
	std::cin >> pause;

	return 0;
}

