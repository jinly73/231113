#include "Slime.h"
#include "Character.h"
#include <iostream>

FSlime::FSlime()
{
	HP = 100;
	std::cout << "»ý¼ºµÊ" << std::endl;
}

FSlime::~FSlime()
{
	std::cout << "ÆÄ±«µÊ" << std::endl;
}
