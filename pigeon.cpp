#include "pigeon.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
void Pigeon::draw(){ 
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


// fly() is overrided from the superclass
void Pigeon::fly(){
    // 
    
}

Pigeon::Pigeon(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {7,88,160,103};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

