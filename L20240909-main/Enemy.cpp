#include "Enemy.h"
#include "random"

void AEnemy::Tick(int KeyCode)
{
	int RandDomMove = rand() % 4;

	if (RandDomMove == 0)
	{
		X++;
	}
	if (RandDomMove == 1)
	{
		X--;
	}
	if (RandDomMove == 2)
	{
		Y++;
	}
	if (RandDomMove == 3)
	{
		Y--;
	}

}
