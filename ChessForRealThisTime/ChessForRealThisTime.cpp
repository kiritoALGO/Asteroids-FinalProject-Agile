#include "SFML/Graphics.hpp"
#include <time.h>
#include <list>
#include <vector>
using namespace sf;

const int W = 1200;
const int H = 800;

float DEGTORAD = 0.017453f;



int main()
{
    srand(time(0));

    RenderWindow app(VideoMode({ W, H }), "Asteroids!");
    app.setFramerateLimit(60);

    /////main loop/////
    while (app.isOpen())
    {


        //////draw//////
        app.draw(background);
        for (auto i : entities) i->draw(app);
        app.display();
    }

    return 0;
}
