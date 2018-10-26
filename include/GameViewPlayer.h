
#ifndef GAMEVIEWPLAYER_H
#define GAMEVIEWPLAYER_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <typeinfo>
#include "Gun.h"
#include "MajorTom.h"
#include "GameLogic.h"

using namespace std;

class GameViewPlayer
{

private:
    float timePassed;
    std::vector<Grunt*> grunts;

public:
    sf::Font gameFont;
    const int iconScale = 64;

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
    sf::Texture pPistol;

    int lane1 = 335;
    int lane2 = 422;
    int lane3 = 508;
    int lane4 = 594;
    int lane5 = 680;


    sf::SoundBuffer gameSound;
    sf::Sound gameMusic;
    sf::Text survivorCnt;
    sf::Event Event;
    float* currentPlayer;

    GameLogic* logic;

    MajorTom majorTom;//need to make new and non default constructor

    GameViewPlayer();
    bool playerViewIsOpen();
    void movePlayer(float timePassed);
    void moveEnemy(float timePassed);
    void updateGame(void);
    void deleteObjects(void);

};

#endif
