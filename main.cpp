#include "Ball.h"
#include <iostream>
#include <cstdint>

int main(int argc, char* argv[])
{
	Ball def;
	def.print();
 
	Ball blue{ "blue" };
	blue.print();
	
	Ball twenty{ 20.0 };
	twenty.print();
	
	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();

    return 0;
}