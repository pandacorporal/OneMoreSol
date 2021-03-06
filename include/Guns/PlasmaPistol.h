
#ifndef PLASMAPISTOL_H
#define PLASMAPISTOL_H

#include "Gun.h"

class PlasmaPistol: public Gun
{
    public:
        PlasmaPistol();
        virtual ~PlasmaPistol();
        int getBulletType();
        int getShotsFired();
        void shotsFiredPlusOne();
        void resetShotsFired();
        int getClipSize();
        float getFireRate();
        float getReloadSpeed();


    private:
        int shotsFired = 0;
        int bulletType = 1;
        float fireRate = 0.25;
        int clip = 12;
        float reloadSpeed = 1;
};

#endif
