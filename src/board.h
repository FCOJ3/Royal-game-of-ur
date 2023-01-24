#ifndef BOARD_H
#define BOARD_H

#include "game_tools.h"

#define TOTAL_SQUARES   20

/* Function: draw_board
 *
 * Accommodate all the square in the rioght coordinates 
 * to create the board
 * 
 */
void draw_board(Square* all_sqrs, GtkWidget* container);

#endif