#include <SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Pigeon : public Unit{

private:
    SDL_Rect srcRect, moverRect;
    int frame = 0;
public:
    // add the fly function here as well.
    virtual void draw();
    virtual void fly();
    Pigeon(); 
    // may add other overloaded constructors here... 
}; 
