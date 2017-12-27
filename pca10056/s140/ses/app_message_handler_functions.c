
#include "app_message_handler_functions.h"
#include "structures.h"
#include "boards.h"
#define LED_EXTERNAL1                    29
#define LED_EXTERNAL2                    30


uint8_t* open_door(uint8_t door_id){

  switch(door_id){
    
    case '1': 
          nrf_gpio_pin_set(LED_EXTERNAL1);
          return "o1\n";
          break;
    case '2': 
          nrf_gpio_pin_set(LED_EXTERNAL2); 
          return "o2\n";
          break;
  }

  return create_replay_message(ERROR);

}

uint8_t * close_door(uint8_t door_id){

  switch(door_id){
    
    case '1': 
        nrf_gpio_pin_clear(LED_EXTERNAL1);
        return "c1\n";
        break;
    case '2': 
        nrf_gpio_pin_clear(LED_EXTERNAL2);
        return "c2\n";
        break;
  }
    return create_replay_message(ERROR);

}


uint8_t* create_replay_message(enum replay_message_type mess_type){

          uint8_t *replay_message;
          switch (mess_type)
          {
  
            case ADMIN_LOGGED:
                    replay_message = "ad";
                    break;

            case USER_SAVED:
                    replay_message = "su";
                    break;

            case ERROR:
                    replay_message = "er";
                    break;

            case USER_LOGGED:
                    replay_message = "us";
                    break;

            case WRONG_PASSWORD:
                    replay_message = "wp";
                    break;

          }

          return replay_message;
}

enum message_action from_char_to_enum(char char_action){

      switch(char_action){

             case 'o': return OPEN_DOOR; break;
             case 'c': return CLOSE_DOOR; break;
             case 'a': return ADMIN_LOGGED; break;
             case 'u': return USER_LOGGED; break;
             case 's': return SAVE_USER; break;
             case 'd': return DISPLAY_USERS; break;
             default: return MESSAGE_ERROR; break;






      }



}

