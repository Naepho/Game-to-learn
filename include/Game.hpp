#ifndef GAME
#define GAME

#include <Window_Handler.hpp>
#include <string>

/*
The game in itself
It should contain the other classes
*/
class Game
{
private:
    Window_Handler window_handler;
public:
    Game();
    ~Game();
};

#endif