#pragma once
#include <vector>
#include "Character.h"
class FPlayer: public FCharacter

{
//�ٸ� ������ ����϶�� ����� ���
public:
	FPlayer();
	~FPlayer();

	void Move(); // ������� ���� ���ذ͸�  .cpp���� ��� ���� ����!
	
};
