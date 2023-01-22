#ifndef   WIDGET_UPDATER_H
#define   WIDGET_UPDATER_H

#include <gtk/gtk.h>
#include "game_tools.h"

#define MAX_CHARS_IN_ROLL   2

/* Function: update_roll
 * 
 * Function that will update a label's text and player-s roll data.
 *
 */
void update_roll(Player *player_data, gpointer data);

#endif   /* WIDGET_UPDATER_H */