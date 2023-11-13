#pragma once
#include <vector>
#include "Character.h"
class FPlayer: public FCharacter

{
//다른 개발자 사용하라고 만드는 기능
public:
	FPlayer();
	~FPlayer();

	void Move(); // 헤더에서 선언 해준것만  .cpp에서 기능 정의 가능!
	
};
