#include "player.h"

void player_start(Player *player, int start_x, int start_y, Direction start_dir, int start_speed) {
	player->xPos = start_x;
	player->yPos = start_y;
	player->speed = start_speed;
	player->direction = start_dir;
}

void player_move(Player *player, int speed) {
	int input_state_direction = input_get_state().direction;

	player->direction = input_state_direction;

	switch (player->direction) {
		case 0:
			player->yPos -= speed;
			break;
		case 1:
			player->xPos += speed;
			break;
		case 2:
			player->yPos += speed;
			break;
		case 3:
			player->xPos -= speed;
			break;
		default:
			break;
	}
	
}
