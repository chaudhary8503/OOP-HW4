#include <iostream>
#include "HUMania.hpp"

void HUMania::updateList(Unit* ptr){
    lst.push_back(ptr);
}
void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    for (Unit* u:lst){
        u->draw();
        u->fly();
    }
} 


// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    for (Unit* u:lst){
        u->draw();
    }
}
