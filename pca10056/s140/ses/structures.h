
#ifndef STRUCTURES_H__
#define STRUCTURES_H__

#include <stdint.h>

#define MAX_USER_LOGIN_SIZE         10
#define MAX_USER_PASSWORD_SIZE      10
#define MAX_USER_ACCESS_SIZE        2
#define MAX_USER_STRING_SIZE        MAX_USER_LOGIN_SIZE + MAX_USER_ACCESS_SIZE + 5


typedef struct 
{
         uint8_t *data_login;
         uint8_t *data_password;
         uint8_t *data_action;
         uint8_t *data_doorId;
         uint8_t *data_access;

} app_message_t;


typedef struct 
{
         char data_login[MAX_USER_LOGIN_SIZE];
         char data_password[MAX_USER_PASSWORD_SIZE];
         char door_access[MAX_USER_ACCESS_SIZE];

} user_t;

enum replay_message_type {ADMIN_LOGGED, USER_LOGGED, ERROR, USER_SAVED, WRONG_PASSWORD};

enum message_action {OPEN_DOOR, CLOSE_DOOR, LOGIN_AS_ADMIN, LOGIN_AS_USER, SAVE_USER, DISPLAY_USERS, MESSAGE_ERROR};

#endif