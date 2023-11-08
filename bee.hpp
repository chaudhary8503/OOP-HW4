#include "drawing.hpp"
#include "unit.hpp"
#include <SDL.h>

class Bee : public Unit {

    private:

    SDL_Rect srcRect, moverRect;
    int frame = 0;

    public:
        void draw();
        void fly();
        Bee();
};