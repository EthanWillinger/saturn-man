#include "../joengine/jo_engine/jo/jo.h"
#include "player.h"


Player player;

void my_draw(void) {
	jo_printf(12, 1, "SATURN MAN!");
	jo_printf(0, 27, "xPosition %d", player.xPos);
	jo_printf(0, 28, "yPosition %d", player.yPos);
}


void game_loop(void) {
	player_move(&player, player.speed);
}


void jo_main(void)
{
	jo_core_init(JO_COLOR_Blue);
	player_start(&player, 0, 0, 1, 10);
	jo_core_add_callback(game_loop);
	jo_core_add_callback(my_draw);
	jo_core_run();
}
