#ifndef EVENT_HANDLER
#define EVENT_HANDLER

#include <SFML/System.hpp>

class Event_Handler
{
private:
    std::vector<sf::Event> event_stack;
public:
    Event_Handler();
    ~Event_Handler();

    void add_event(sf::Event event);
    sf::Event pop_event();
};

#endif