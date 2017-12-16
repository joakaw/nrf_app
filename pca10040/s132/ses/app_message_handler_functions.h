#ifndef APP_MESSAGE_HANDLER_FUNCTIONS_H__
#define APP_MESSAGE_HANDLER_FUNCTIONS_H__
#include <stdint.h>

#include "structures.h"


uint8_t* open_door(uint8_t door_id);
void close_door(uint8_t door_id);


uint8_t* create_replay_message(enum replay_message_type mess_type);

#endif 
