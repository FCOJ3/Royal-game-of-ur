#ifndef DICE_H
#define DICE_H

#include <stdlib.h>

/* Error value to detect problems */
#define ERROR   255

/* Value to get a random number between 0 and 1 */
#define VAL_FOR_RAND  2

/* Number of dices used in the game */
#define TOTAL_DICES   4

/* Function: get_dice_value
 *
 * Gets a random value between zero and one
 * 
 */
int get_dice_value();

/* Function: get_total_dices
 *
 * Gets the addition of all roll dices
 * 
 */
int get_total_dices();

#endif   /*DICE_H*/