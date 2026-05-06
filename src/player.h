#ifndef PLAYER_H
#define PLAYER_H

#include "input.h"

typedef struct {
	int xPos, yPos;
	int speed;
	Direction direction;
} Player;

void player_start(Player *player, int start_x, int start_y, Direction start_dir, int speed);
void player_move(Player *player, int speed);

#endif
