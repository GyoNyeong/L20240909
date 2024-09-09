#include "Engine.h"
#include "Actor.h"
#include "Player.h"
#include "Enemy.h"

int main()
{
	Engine MyEngine;

	APlayer* MyPlayer = new APlayer(); 
	AEnemy* Enemy = new AEnemy();


	MyPlayer->SetX(5);
	MyPlayer->SetY(8);
	MyPlayer->SetStaticMesh('P');

	Enemy->SetX(18);
	Enemy->SetY(15);
	Enemy->SetStaticMesh('E');

	MyEngine.SpawnActor(MyPlayer);
	MyEngine.SpawnActor(Enemy);
	MyEngine.Run();

	return 0;
}