#include "input.h"

InputState input_get_state(void) {
	InputState state = {0};

	// Read D-Pad
	if (jo_is_pad1_key_down(JO_KEY_UP)) {
		state.direction = NORTH;
	} else if (jo_is_pad1_key_down(JO_KEY_DOWN)) {
		state.direction = SOUTH;
	} else if (jo_is_pad1_key_down(JO_KEY_RIGHT)) {
		state.direction = EAST;
	} else if (jo_is_pad1_key_down(JO_KEY_LEFT)) {
		state.direction = WEST;
	} else {
		state.direction = DIRECTION_NONE;
	}
	return state;
}
