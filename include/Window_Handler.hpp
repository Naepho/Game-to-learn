#ifndef WINDOW_HANDLER
#define WINDOW_HANDLER

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>

class Window_Handler
{
private:
    sf::RenderWindow window;
    std::string title;
    sf::Vector2u size;
public:
    Window_Handler();
    Window_Handler(int x, int y, std::string title_in);
    ~Window_Handler();

    void create(int x, int y, std::string title);
    void loop();
};

#endif