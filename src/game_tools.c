#include "game_tools.h"

/*
 * Refer to game_tools.h for further information
 */
void initialize_player(Player* plyr, Player_side which_player)
{
    if (NULL != plyr)
    {
        plyr->pieces_left = MAX_PIECES;
        plyr->roll = NO_ROLL;
        plyr->score = SCORE_ZERO;
        plyr->roll_label = gtk_label_new(INITIAL_LABEL_ROLL);

        switch (which_player)
        {
          case FIRST_PLAYER:
            plyr->plyr_side = FIRST_PLAYER;
            plyr->turn = TRUE;
            break;

          case SECOND_PLAYER:
            plyr->plyr_side = SECOND_PLAYER;
            plyr->turn = FALSE;
            break;
        
          default:
            break;
        }
    }
    else
    {
        printf("Null pointer");
    }   
}

/*
 * Refer to game_tools.h for further information
 */
void initialize_piece(Piece* pc, Player_side which_player)
{
    if (NULL != pc)
    {
        pc->location = INITIAL_SQUARE;

        switch (which_player)
        {
          case FIRST_PLAYER:
            pc->piece_image = gtk_image_new_from_file(IMAGE_PATH_BOARD);
            pc->side = FIRST_PLAYER;
            break;
        
          case SECOND_PLAYER:
            pc->piece_image = gtk_image_new_from_file(IMAGE_PATH_BOARD);
            pc->side = SECOND_PLAYER;
            break;

          default:
            break;
        }
    }
    else
    {
        printf("Null pointer");
    }
}

/*
 * Refer to game_tools.h for further information
 */
void initialize_square(Square* sq, GtkWidget* image)
{
    static unsigned int id_assignment = FIRST_SQUARE_ID;

    if (NULL != sq && NULL != image)
    {
        sq->button = gtk_button_new();
        if (NULL != sq->button)
        {
            gtk_button_set_image(GTK_BUTTON(sq->button), image);
        }
        sq->id = id_assignment++;
        sq->occupied = false;
    }
    else
    {
        printf("Null pointer");
    }
}