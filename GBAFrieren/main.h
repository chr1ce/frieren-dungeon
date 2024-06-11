#ifndef MAIN_H
#define MAIN_H

#include "gba.h"
#include "player.h"

#define PLAYER_SPEED 2
#define SPRITE_SIZE 16

typedef struct Chest_t {
    int x;
    int y;
    int value;
    int isMimic;
} Chest;

int canSelect(Chest chest, Player player);
Chest createChest(int x, int y, int value, int isMimic);
int collides(int x1, int y1, int x2, int y2, int width1, int height1, int width2, int height2);
int useChest(Chest chest, Player player);

/*
* 
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
