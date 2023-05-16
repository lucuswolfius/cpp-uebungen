#include <string>

#ifndef PLAYER_H    //Guard
#define PLAYER_H

class Player
{
    public:
    std::string getName();
    int getLifes();
    float getEnergy();
    void printStatus();
    void setEnergy(float newEnergyLevel);
    int addLives(int amount);
    int removeLives(int amount);
    void changeEnergy(float amount);
    void watch_energy();

    private:
    std::string name = "Xaviett Morgentau";
    int lifes = 3;
    float energy = 1.f;
};

#endif  //End of guard