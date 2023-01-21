#include "button_events.h"
#include "dice.h"
#include "game_tools.h"
#include "updater.h"

/*
 * Refer to button_events.h for further information
 */
void btn_evt_move(GtkWidget *widget, gpointer data)
{

}

/*
 * Refer to button_events.h for further information
 */
void btn_evt_play(GtkWidget *widget, gpointer data)
{
    gpointer aux;
    aux = malloc(sizeof(int));
    
    if (NULL != aux)
    {
        *(int *)aux = get_total_dices();
    }

    if (NULL != data)
    {
        update_roll((Player *)data, aux);
    }

    free(aux);
}
