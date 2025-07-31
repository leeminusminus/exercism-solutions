#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#include <stdint.h>

typedef enum { CAN_NOT_ATTACK, CAN_ATTACK, INVALID_POSITION } attack_status_t;

typedef struct {
   uint8_t row;
   uint8_t column;
} position_t;

attack_status_t can_attack(position_t queen_1, position_t queen_2);

int valid_pos(position_t queen);

int no_overlap(position_t queen_1, position_t queen_2);

int are_parallel(position_t queen_1, position_t queen_2);

int are_diagonal(position_t queen_1, position_t queen_2);

#endif
