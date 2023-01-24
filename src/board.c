#include "board.h"

/*
 * Refer to board.h for further information
 */
void draw_board(Square *sqr, GtkWidget* container)
{
    gtk_box_pack_start(GTK_BOX(container), sqr->button, TRUE, FALSE, 0);
}