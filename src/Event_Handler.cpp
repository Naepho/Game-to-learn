#include <Event_Handler.hpp>

Event_Handler::Event_Handler()
{

}

Event_Handler::~Event_Handler()
{

}

// Public functions

void Event_Handler::add_event(sf::Event event)
{
    event_stack.push_back(event);
}

sf::Event Event_Handler::pop_event()
{
    sf::Event popped = event_stack.back();
    event_stack.pop_back();
    return popped;
}