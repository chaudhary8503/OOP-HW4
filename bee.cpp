#include "bee.hpp"
#include "drawing.hpp"
#include "game.hpp"

void Bee::draw() {
    // Implementation for drawing bee
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Bee::fly() {

    // Implementation for butterfly flying behavior
    while (true) {
        static int count = 0;
        count++;
        SDL_RenderClear(Drawing::gRenderer); // Clear screen before re-drawing
        
        // Implementation for bee flying behavior
        moverRect.x += 5;

        // 5% probability to start hover
        int randomProbability = rand() % 100;
        if (randomProbability < 5) {
            // Hover for 10 frames
            for (int i = 0; i < 10; i++) {
                // Do nothing, bee hovers
            }
        }

        // If bee reaches rightmost border, remove it from the vector
        Game dimension;
        if (moverRect.x > dimension.get_width()) {
            // Remove bee from the vector
            // ...
        }

        if (count % 3 == 0) {
            srcRect = {527,138,194,115};
        } else if (count % 3 == 1) {
            srcRect = {527,253.5,194,115};
        } else {
            srcRect = {540,370,193,115};
        }

        SDL_RenderPresent(Drawing::gRenderer); // Update the screen
    }
}

Bee::Bee(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {527,138,194,115};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}
