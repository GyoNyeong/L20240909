#include "Engine.h"
#include <iostream>
#include <conio.h>
#include "Engine.h"

void Engine :: Render()
{
	system("cls");

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (i == PlayerY && j == PlayerX)
			{
				std::cout << '*';
			}
			else
			{
				std::cout << ' ';
			}
		}
		std::cout << "\n";
	}
}


void Engine :: Input()
{
	Key = _getch();
}


void Engine :: Tick()
{
	if (Key == 'w')
	{
		PlayerY--;
	}
	if (Key == 's')
	{
		PlayerY++;
	}
	if (Key == 'a')
	{
		PlayerX--;
	}
	if (Key == 'd')
	{
		PlayerX++;
	}
	if (Key == 'q')
	{
		bIsPlay = false;
	}

}


Engine::Engine()
{
}

Engine::~Engine()
{
}
