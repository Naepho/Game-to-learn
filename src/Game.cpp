#include <Game.hpp>

Game::Game()
{
    window_handler.create(800, 600, std::string("Test"));
    window_handler.loop();
}

Game::~Game()
{
}