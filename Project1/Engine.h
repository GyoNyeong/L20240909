#pragma once
#include <iostream>
#include <conio.h>

class Engine
{
public:

	Engine();
	virtual ~Engine();

protected:
	void Render();
	void Input();
	void Tick();

	
	char Key;
	int PlayerX = 0;
	int PlayerY = 0;
	bool bIsPlay = true;
	


public:
	virtual void Run()
	{
		while (bIsPlay)
		{
			Input();
			Tick();
			Render();
		}
	}
};

