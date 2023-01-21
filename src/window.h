#ifndef WINDOW_H
#define WINDOW_H

#include <gtk/gtk.h>

/* Main window Width */
#define WINDOW_WIDTH    600

/* Main window Height */
#define WINDOW_HEIGHT   800

/* Function: activate
 *
 * Activates and shows main window and all its widgets
 * 
 */
void activate (GtkApplication *app, gpointer user_data);

#endif /*WINDOW_H*/