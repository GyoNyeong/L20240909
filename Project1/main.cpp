#include <iostream>
#include <conio.h>

using namespace std;



char Key;
int PlayerX = 1;
int PlayerY = 1;
bool bIsPlay = true;

void Render()
{
	system("cls");

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (i == PlayerY && j == PlayerX)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}


}
	


void Input()
{
	Key = _getch();
}


void Process()
{
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
}



int main()
{

	while (bIsPlay)
	{
		Input();
		Process();
		Render();
	}


	return 0;
}