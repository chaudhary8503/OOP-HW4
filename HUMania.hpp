#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include<vector>
#include<list>
using namespace std;

class HUMania{

    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
    private:
    list<Unit*> lst;

    //Create your list here
    public:
    void updateList(Unit* ptr);
    void drawObjects(); 
    void createObject(int, int);
    
    // create destructor which deletes all dynamic objects
};