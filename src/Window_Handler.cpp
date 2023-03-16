#include <Window_Handler.hpp>

Window_Handler::Window_Handler()
{}

Window_Handler::Window_Handler(int x, int y, std::string title)
{
    window.create(sf::VideoMode(x, y), title);
}

Window_Handler::~Window_Handler()
{}

void Window_Handler::create(int x, int y, std::string title_in)
{
    title = title_in;
    window.create(sf::VideoMode(x,y), title);
}

void Window_Handler::loop()
{
    while(window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            window.display();
        }
        
    }
}