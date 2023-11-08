#include "pigeon.hpp"
#include "game.hpp"
#include "drawing.hpp"
#include "Unit.hpp"

// in project implementation this draw function should only be in superclass
void Pigeon::draw(){

    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

// fly() is overrided from the superclass
void Pigeon::fly(){

    while (true) {
        static int count = 0;
        count++;
        SDL_RenderClear(Drawing::gRenderer); // Clear screen before re-drawing

        moverRect.x += 5;

        if (moverRect.x > 1000) {
            moverRect.x = 0; // reset the pigeons to the left
        }

        if (count % 3 == 0) {
            srcRect = {2, 361, 159, 124};
        } else if (count % 3 == 1) {
            srcRect = {0, 237, 153, 84};
        } else {
            srcRect = {7, 88, 155, 103};
        }

        SDL_RenderPresent(Drawing::gRenderer); // Update the screen
    }

}

Pigeon::Pigeon(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {7,88,160,103};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

