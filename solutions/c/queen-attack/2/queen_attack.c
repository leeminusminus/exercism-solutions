#include "queen_attack.h"
#include <stdlib.h>

int valid_pos(position_t queen) { /* checks if the queen is on the board */
    return (queen.row <= 7 && queen.column <= 7);
}

int no_overlap(position_t queen_1, position_t queen_2) { /* checks if both queens are not on the same space */
    return !(queen_1.column == queen_2.column && queen_1.row == queen_2.row);
}

int are_parallel(position_t queen_1, position_t queen_2) { /* checks if both queens are parallel (can attack) */
    return (queen_1.row == queen_2.row || queen_1.column == queen_2.column);
}

int are_diagonal(position_t queen_1, position_t queen_2) { /* checks if both queens are diagonal (can attack) */
    return (abs((int)queen_1.row-(int)queen_2.row) == abs((int)queen_1.column-(int)queen_2.column));
}


attack_status_t can_attack(position_t queen_1, position_t queen_2) { /* puts everything together */
    if (valid_pos(queen_1) && valid_pos(queen_2) && no_overlap(queen_1,queen_2))
        if (are_parallel(queen_1,queen_2) || are_diagonal(queen_1,queen_2))
            return CAN_ATTACK;
        else
            return CAN_NOT_ATTACK;
    else
        return INVALID_POSITION;
}
