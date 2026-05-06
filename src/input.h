#ifndef INPUT_H
#define INPUT_H

#include "../joengine/jo_engine/jo/jo.h"

typedef enum {
	NORTH = 0,
	EAST = 1,
	SOUTH = 2,
	WEST = 3,
	DIRECTION_NONE = 4
} Direction;

typedef struct {
    unsigned int button_a : 1;
    unsigned int button_b : 1;
    unsigned int button_c : 1;
    unsigned int button_x : 1;
    unsigned int button_y : 1;
    unsigned int button_z : 1;
    unsigned int button_start : 1;
    Direction direction;
} InputState;

InputState input_get_state(void);

int input_is_direction_pressed(Direction dir);

int input_is_button_pressed(unsigned int button_mask);

#endif
