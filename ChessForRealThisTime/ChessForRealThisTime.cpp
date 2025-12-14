#include "SFML/Graphics.hpp"
#include <time.h>
#include <list>
#include <vector>
using namespace sf;

const int W = 1200;
const int H = 800;

float DEGTORAD = 0.017453f;


class Animation
{
public:
    float Frame, speed;
    //Sprite sprite;
    std::unique_ptr<Sprite> sprite;
    std::vector<IntRect> frames;

    Animation() : Frame(0), speed(0.f), sprite(nullptr) {} // this still gives error

    Animation(Texture& t, int x, int y, int w, int h, int count, float Speed) // this i add is good
    {
        Frame = 0;
        speed = Speed;

        for (int i = 0; i < count; i++)
            frames.push_back(IntRect({x + i * w, y}, { w, h }));
        sprite = std::make_unique<Sprite>(t);
        sprite->setTexture(t);
        sprite->setOrigin(Vector2f(w / 2, h / 2));
        sprite->setTextureRect(frames[0]);
    } 


    void update()
    {
        Frame += speed;
        int n = frames.size();
        if (Frame >= n) Frame -= n;
        if (n > 0) sprite->setTextureRect(frames[int(Frame)]);
    }

    bool isEnd()
    {
        return Frame + speed >= frames.size();
    }

};



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
