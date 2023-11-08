#include "butterfly.hpp"
#include "game.hpp"
#include "drawing.hpp"


void Butterfly::draw() {
    // Implementation for drawing butterfly
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Butterfly::fly() {

    // Implementation for butterfly flying behavior
    while (true) {
        static int count = 0;
        count++;
        SDL_RenderClear(Drawing::gRenderer); // Clear screen before re-drawing

        moverRect.x += 5;
        Game dimension;
        if (moverRect.y < dimension.get_height() - moverRect.h) {
            moverRect.y += 5;
        } else {
            moverRect.y = 0;
        }

        if (count % 3 == 0) {
            srcRect = {257,24,173,134};
        } else if (count % 3 == 1) {
            srcRect = {257,182,192,214};
        } else {
            srcRect = {248,432,248,179};
        }

        SDL_RenderPresent(Drawing::gRenderer); // Update the screen
    }
}

Butterfly::Butterfly(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {257,24,173,134};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
} 