#ifndef GAMEVIEWPLAYER_H
#define GAMEVIEWPLAYER_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Gun.h"

using namespace std;

class GameViewPlayer
{

private:
    float timePassed;

public:
    sf::Font gameFont;

    sf::RenderWindow gameWindow;
    sf::RectangleShape background;
    sf::CircleShape sky;

    sf::RectangleShape weapon1;
    sf::RectangleShape weapon2;
    sf::RectangleShape weapon3;
    sf::RectangleShape weapon4;
    sf::RectangleShape weapon5;
    sf::RectangleShape weapon6;
    sf::RectangleShape weapon7;

    sf::Texture gameImage;
    sf::Texture playerImage;
    sf::Texture gameSky;
    sf::Texture lockIcon;
    sf::SoundBuffer gameSound;
    sf::Sound gameMusic;

    float* currentPlayer;

    GameViewPlayer();
    void movePlayer(float timePassed);
    void moveEnemy(float timePassed);
    void updateGame(void);
    void deleteObjects(void);


};

#endif
