
#ifndef INCLUDE_JACKAL_H_
#define INCLUDE_JACKAL_H_

#include <SFML/Graphics.hpp>
#include "KoratEmpire.h"
#include "TextureLoader.h"
#include "rngs.h"

class Jackal: public KoratEmpire {
public:
	sf::Sprite jackal;
	sf::IntRect spriteFrame;

	Jackal(int, TextureLoader*);
	virtual ~Jackal();

	int getLane();

	std::string getName();

	void setLane(int givenLane);

	void wasShot(int damage);

	bool checkDeath();

	void moveCurrentKorat(float timePassed);

	void drawCurrentKorat(sf::RenderWindow& window);

	sf::Sprite getKorat();

	float getPositionX();

	bool checkSurvive();

	int getHealth();

	int getSpeed();

	double getFireRate();

	void setFireRate(double);

	bool queryToFire();

private:

	int lane;
	int speed = 150;
	int health = 90;
	bool survive = false;

    int lane1 = 335;
    int lane2 = 422;
    int lane3 = 508;
    int lane4 = 594;
    int lane5 = 680;

    double fireRate = 5;
    float lastBulletFired;
    sf::Clock fireBulletClock;

    bool koratDeathSoundPlayed = false;
	bool koratLeftSoundPlayed = false;
    float postDeathTime;
	sf::Clock postDeathClock;
	sf::Clock postLeftClock;
	float postLeftTime;

};

#endif
