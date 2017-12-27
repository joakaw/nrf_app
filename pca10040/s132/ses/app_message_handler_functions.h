#ifndef APP_MESSAGE_HANDLER_FUNCTIONS_H__
#define APP_MESSAGE_HANDLER_FUNCTIONS_H__
#include <stdint.h>

#include "structures.h"


char* open_door(uint8_t door_id);
char* close_door(uint8_t door_id);


char* create_replay_message(enum replay_message_type mess_type);
enum message_action from_char_to_enum ( char message_action);

#endif 
