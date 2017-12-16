
#ifndef STRUCTURES_H__
#define STRUCTURES_H__

#include <stdint.h>


typedef struct 
{
         uint8_t *data_login;
         uint8_t *data_password;
         uint8_t *data_action;
         uint8_t *data_doorId;
         uint8_t *data_access;

} app_message_t;

//typedef struct 
//{
//         uint8_t *data_login;
//         uint8_t *data_password;
//         uint8_t *door_access;
//} user_t;


typedef struct 
{
         char data_login[10];
         char data_password[10];
         char door_access[2];

} user_t;

enum replay_message_type {ADMIN_LOGGED, USER_LOGGED, ERROR, USER_SAVED, WRONG_PASSWORD};

#endif