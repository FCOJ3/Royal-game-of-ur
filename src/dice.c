#include "dice.h"

/*
 * Refer to dice.h for further information
 */
int get_dice_value()
{
    int rand_num = ERROR;
    rand_num = rand() % VAL_FOR_RAND;
    return rand_num;
}

/*
 * Refer to dice.h for further information
 */
int get_total_dices()
{
    int count = 0;

    for (int i = 0; i < TOTAL_DICES; i++)
    {
        count += get_dice_value();
    }

    return count;
}