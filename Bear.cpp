#include "Bear.h"
#include "Character.h"
#include <iostream>

FBear::FBear()
{
	HP = 100;
	std::cout << "»ý¼ºµÊ" << std::endl;
}

FBear::~FBear()
{
	std::cout << "ÆÄ±«µÊ" << std::endl;
}
