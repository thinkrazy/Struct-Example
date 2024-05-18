#include <stdio.h>
#include "example.h"

// File example
typedef struct
{
    Vector3 position;
    int health;
} Player;
int main()
{
    Vector3 position;
    position.x = 15;
    position.y = 0;
    position.z = 30;

    Player player;
    player.position.x = 55;
    player.position.y = 10;
    player.position.z = 35;
    player.health = 100;

    printf("WorldPosition:\n%.2f, %.2f, %.2f\n", position.x, position.y, position.z);
    printf("Player Position:\n%.2f, %.2f, %.2f\n", player.position.x, player.position.y, player.position.z);
    printf("Player Health:\n%i\n", player.health);

    return 0;
}
