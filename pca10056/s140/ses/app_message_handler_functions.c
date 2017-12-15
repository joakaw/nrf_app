
#include "app_message_handler_functions.h"
#include "structures.h"
#include "boards.h"
#define LED_EXTERNAL1                    29
#define LED_EXTERNAL2                    30


void open_door(uint8_t door_id){

  switch(door_id){
    
    case '1': nrf_gpio_pin_set(LED_EXTERNAL1); break;
    case '2': nrf_gpio_pin_set(LED_EXTERNAL2); break;
  }

}

void close_door(uint8_t door_id){

  switch(door_id){
    
    case '1': nrf_gpio_pin_clear(LED_EXTERNAL1); break;
    case '2': nrf_gpio_pin_clear(LED_EXTERNAL2); break;
  }

}


void save_user(user_t user, user_t *users, uint8_t users_max_size){

        uint8_t tab_size = users_max_size;

        for(int i = tab_size; i > 0; i--){
            users[i] = users[i-1];
        }
        users[0].data_login = user.data_login;
        users[0].data_password = user.data_password;
        users[0].door_access = user.door_access;
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
