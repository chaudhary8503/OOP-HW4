#include "drawing.hpp"
#include "Unit.hpp"


class Butterfly : public Unit {

    private:

    SDL_Rect srcRect, moverRect;
    int frame = 0;

    public:

        void draw();
        void fly(); 
        Butterfly();
        
};