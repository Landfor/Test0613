#include "Head.h"
#include <conio.h>
#include "ConsoleEngineCore.h"

Head::Head() 
{
    SetChar('H');
    SetPos({ 0,0 });
}

Head::~Head() 
{
}

void Head::Tick(float _Time) 
{
    char Select = (char)_getch();

    int4 MovePos = { 0, 0 };

    switch (Select)
    {
    case 'a':
        if (Head::Selector != Select)
        {
            Head::Selector = 'd';
            MovePos = int4::Left;
        }
        else if (Head::Selector == 'd')
        {
            return;
        }
        break;
    case 'd':
        if (Head::Selector != Select)
        {
            Head::Selector = 'a';
            MovePos = int4::Right;
        }
        else if (Head::Selector == 'a')
        {
            return;
        }
        break;
    case 'w':
        if (Head::Selector != Select)
        {
            Head::Selector = 's';
            MovePos = int4::Up;
        }
        else if (Head::Selector == 's')
        {
            return;
        }
        break;
    case 's':
        if (Head::Selector != Select)
        {
            Head::Selector = 'w';
            MovePos = int4::Down;
        }
        else if (Head::Selector == 'w')
        {
            return;
        }
        break;
    case 'q':
        ConsoleEngineCore::EngineOff();
        break;
    default:
        break;
    }

    AddPos(MovePos);
}