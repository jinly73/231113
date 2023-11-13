#include "Player.h"
#include <iostream>
#include "Character.h"
FPlayer::FPlayer()
{
	HP = 100;
	std::cout << "플레이어 생성됨" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "플레이어 파괴됨" << std::endl;
}

void FPlayer::Move()
{
	std::cout << "자식은 혼자 움직인다" << std::endl;
}

