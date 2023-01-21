#ifndef   BUTTON_EVENTS_H
#define   BUTTON_EVENTS_H

#include <gtk/gtk.h>

/* Function: btn_evt_play
 *
 * Event that will catch when a player throws the dice.
 * 
 */
void btn_evt_play(GtkWidget *widget, gpointer data);

/* Function: btn_evt_move
 * 
 * Event that will catch when any player moves.
 * 
 */
void btn_evt_move(GtkWidget *widget, gpointer data);

#endif   /* BUTTON_EVENTS_H*/