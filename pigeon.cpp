#include "pigeon.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
void Pigeon::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


// fly() is overrided from the superclass
void Pigeon::fly(){
    // 
    while (true){
    static int count = 0;   //Initilizing a static variable. This is used in the loops to make the 3 animations of moving sprite
    count++;                //The variable is incremented whenever this function is called. This allows the count to change for every animation.
    for (int i=0;i<pigeons.size();i++){     //Loop that shows animations according to the objects present in Pigeons vector
        SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &pigeons[i].srcRect, &pigeons[i].moverRect);  //Renderer used to draw the pigeon SrcRect and MoverRect on the screen
        pigeons[i].moverRect.x+=10;         //The pigeon keeps on moving 10 units in the x direction
        if (pigeons[i].moverRect.x>1000){   //1000 is the screenwidth according to game.hpp.
            pigeons[i].moverRect.x=0;       //Whenever a pigeon reaches screenwidth, its x-coordinate of MoverRect resets to 0 to make it reappear from left of the screen.
        }           
        //The following conditions use the count and modulus operation to cycle through the three animations of the sprites.
        //The chronological order ensures that the animation undergoes a full cycle.
        if (count%3==0){                        
            pigeons[i].srcRect= {2,361,159,124};//Generates the first animation of pigeon sprite
        }
        else if (count%3==1){
            pigeons[i].srcRect={0,237,153,84}; //Generates the second animation of pigeon sprite
        }
        else{
            pigeons[i].srcRect={7,88,155,103}; //Generates the third animation of pigeon sprite
        }
    } 
    }
}

Pigeon::Pigeon(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {7,88,160,103};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

