
#include "PlasmaShotgunBullet.h"
#include <iostream>

PlasmaShotgunBullet::PlasmaShotgunBullet(int startLane, TextureLoader* loadedTextures) {
    plasma.setTexture(loadedTextures->textureArray[0]);
    plasma.setTextureRect(sf::IntRect(256,64,32,32));
	plasma.setOrigin(sf::Vector2f(16.f,16.f));
	setLane(startLane);
	plasma.setPosition(height, lane);
	speed = 500;
	damage = 35;

	if (!plasmaPistolSound.loadFromFile("assets/Plasma_Pistol_Sound.ogg")) // Loads and initializes all sounds based on impact
    std::cout << "Could not load Plasma Pistol Sound." << std::endl;

    firePlasmaPistol.setBuffer(plasmaPistolSound);
    firePlasmaPistol.setVolume(50);
    firePlasmaPistol.play();
}

PlasmaShotgunBullet::~PlasmaShotgunBullet() {
	// TODO Auto-generated destructor stub
}

int PlasmaShotgunBullet::getDamage()
{
    return damage;
}

int PlasmaShotgunBullet::getLane()
{
    return lane;
}

int PlasmaShotgunBullet::getHeight()
{
    return height;
}

float PlasmaShotgunBullet::getPositionX()
{
    return plasma.getPosition().x;
}

void PlasmaShotgunBullet::setLane(int givenLane)
{
     switch(givenLane)
	{
		case 1:
			lane = lane1;
			height = height1;
			break;
		case 2:
			lane = lane2;
			height = height2;
			break;
		case 3:
			lane = lane3;
			height = height3;
			break;
		case 4:
			lane = lane4;
			height = height4;
			break;
		case 5:
			lane = lane5;
			height = height5;
			break;
		default:
			lane = lane1;
			height = height1;
			break;
	}
}

void PlasmaShotgunBullet::moveCurrentBullet(float timePassed)
{
        if(plasma.getPosition().x < 1500)
        {
            plasma.move(speed * timePassed, 0);
            outOfBounds = false;
        }
        else
        {
            outOfBounds = true;
        }
}

void PlasmaShotgunBullet::drawCurrentBullet(sf::RenderWindow& window)
{
    window.draw(plasma);
}

bool PlasmaShotgunBullet::getOutOfBounds()
{
    return outOfBounds;
}

sf::Sprite PlasmaShotgunBullet::getBullet()
{
    return plasma;
}
