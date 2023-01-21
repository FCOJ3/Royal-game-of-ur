#include "button_events.h"
#include "game_tools.h"
#include "window.h"

/*
 * Refer to window.h for further information
 */
void activate(GtkApplication *app, gpointer user_data)
{
  const char *button_label = "Play";
  Player *first_player = (Player*)malloc(sizeof (Player));
  Player *second_player = (Player*)malloc(sizeof (Player));
  GtkWidget *image_board;
  GtkWidget *player_one_button;
  GtkWidget *player_two_button;
  GtkWidget *window;
  GtkWidget *box;

  initialize_player(first_player, FIRST_PLAYER);
  initialize_player(second_player, SECOND_PLAYER);

  window = gtk_application_window_new(app);
  gtk_window_set_title(GTK_WINDOW(window), "Window");
  gtk_window_set_default_size(GTK_WINDOW(window), WINDOW_WIDTH, WINDOW_HEIGHT);

  image_board = gtk_image_new_from_file(IMAGE_PATH_BOARD);

  player_one_button = gtk_button_new_with_label(button_label);
  g_signal_connect(player_one_button, "clicked", G_CALLBACK(btn_evt_play), (Player *)first_player);
  player_two_button = gtk_button_new_with_label(button_label);
  g_signal_connect(player_two_button, "clicked", G_CALLBACK(btn_evt_play), (Player *)second_player);

  box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
  gtk_container_add(GTK_CONTAINER(window), box);

  gtk_box_pack_start(GTK_BOX(box), image_board, FALSE, FALSE, 50);
  gtk_box_pack_start(GTK_BOX(box), player_one_button, FALSE, FALSE, 20);
  gtk_box_pack_start(GTK_BOX(box), first_player->roll_label, FALSE, FALSE, 20);
  gtk_box_pack_start(GTK_BOX(box), player_two_button, FALSE, FALSE, 20);
  gtk_box_pack_start(GTK_BOX(box), second_player->roll_label, FALSE, FALSE, 20);

  gtk_widget_show_all(window);
}