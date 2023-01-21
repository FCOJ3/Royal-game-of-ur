#include "updater.h"

/*
 * Refer to widget_updater.h for further information
 */
void update_roll(Player *player_data, gpointer data)
{
    if(NULL != player_data && NULL != data)
    {
        char roll_text[MAX_CHARS_IN_ROLL];
        sprintf(roll_text, "%d", *(int *)data);
        gtk_label_set_label((GtkLabel*)player_data->roll_label, roll_text);

        player_data->roll = *(int *)data;
    }
    else
    {
        printf("Null pointer");
    }
}