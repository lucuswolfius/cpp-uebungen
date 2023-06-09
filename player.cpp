#include "player.h"
#include <iostream>
#include <iomanip>

using namespace std;

std::string Player::getName()
{
    return Player::name;
}
int Player::getLifes()
{
    return lifes;
}
float Player::getEnergy()
{
    return energy;
}
void Player::printStatus()
{
    cout << "Player status:" << endl;
    cout << '-' << setw(120) << setfill('-') << '-' << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "Lives: " << this->getLifes() << endl;
    cout << "Energy: " << this->getEnergy() * 100 << '%' << endl; 
}
void Player::setEnergy(float amount)
{
    energy -= amount;
    watch_energy();
}
int Player::addLives(int amount)
{
    lifes += amount;
    return lifes;
}
int Player::removeLives(int amount)
{
    lifes -= amount;
    if (lifes != 0)
    {
        cout << "Life lost!" << endl;
        energy = 1.; 
    }
    else
    {
        cout << "Game Over!" << endl;
    }
    return lifes;
}
void Player::changeEnergy(float amount)
{
    energy += amount;
    watch_energy();
}
void Player::watch_energy()
{
    if (energy <= 0)
    {
        energy = 1;
        removeLives(1);
    }
    else if (energy > 1)
    {
        energy = 1;
    }
}
