#include "Part.h"
#include <conio.h>
#include <Windows.h>
#include "ConsoleEngineCore.h"

Part::Part() 
{
	SetChar('B');
	SetPos({ 0,0 });
}

Part::~Part() 
{
}

void Part::BodyRandom(int4 _Seed)
{
	int4 RandomPos = { 0, 0 };

	int crush = 0;

	int4 ran = { 3,3 };

	ConsoleEngineCore::Screen.ScreenScale() = RandomPos;

	while (crush == 0)
	{
		srand(time(0));

//		int4 rand() % RandomPos;
	}
}