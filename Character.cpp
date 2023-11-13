#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
	std::cout << "»ý¼ºµÊ" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "ÆÄ±«µÊ" << std::endl;
}

void FCharacter::Move()
{
	std::cout << "ºÎ¸ð°¡ ¿òÁ÷ÀÓ!!" << std::endl;
}
