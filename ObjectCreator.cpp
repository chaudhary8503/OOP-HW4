#include "ObjectCreator.hpp"
#include "unit.hpp"
#include <random>
#include "pigeon.hpp"
#include "bee.hpp"
#include <HUMania.hpp>
#include "butterfly.hpp"
Unit* ObjectCreator::getObject(){
    Unit* ptr;
    HUMania obj;
    int randomNum = rand() % 3;     //creates a random number from 0 to 2
    if (randomNum==0){              //if that random number is 0, a pigeon object is created and pushed into pigeons vector
        ptr = new Pigeon();
        obj.updateList(ptr);
    }//First half is the SrcRect taken from spritecow and second is MoverRect consisting of the x and y coordinates of the location mouse is clicked.

    else if (randomNum==1){         //if that random number is 1, a bee object is created and pushed into bees vector
        ptr = new Bee();
        obj.updateList(ptr);    //an object of type unit is created and pushed into bees.
    }//First half is the SrcRect taken from spritecow and second is MoverRect consisting of the x and y coordinates of the location mouse is clicked.

    else if (randomNum==2){         //if that random number is 2, a butterfly object is created and pushed into butterflies vector
        ptr = new Butterfly();
        obj.updateList(ptr);////an object of type unit is created and pushed into butterflies.
    }//First half is the SrcRect taken from spritecow and second is MoverRect consisting of the x and y coordinates of the location mouse is clicked.
    return ptr;
} 