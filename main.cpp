#include "player.h"

using namespace std;

int main(void)
{
    Player player;
    player.printStatus();
    player.setEnergy(0.3);
    player.printStatus();

    return EXIT_SUCCESS;
}
