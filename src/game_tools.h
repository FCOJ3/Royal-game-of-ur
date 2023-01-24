#ifndef GAME_TOOLS_H
#define GAME_TOOLS_H

#include <stdbool.h>
#include <gtk/gtk.h>

/* Inital label that will be shown before the game starts */
#define FIRST_SQUARE_ID   1

/* Inital label that will be shown before the game starts */
#define INITIAL_LABEL_ROLL   "0"

/* Path where the board image is stored */
#define IMAGE_PATH_BOARD   "images/Board.png"

/* Path where the red piece image is stored */
#define IMAGE_PATH_RED_PIECE   "images/Pieces/red.png"

/* Path where the blue piece image is stored */
#define IMAGE_PATH_BLUE_PIECE   "images/Pieces/blue.png"

/* Path where the square image is stored */
#define IMAGE_PATH_SQUARE   "images/square.png"

/* Square number zero where all the pieces start */
#define INITIAL_SQUARE   0U

/* Square number zero where all the pieces start */
#define MAX_PIECES   7U

/* Initial score */
#define SCORE_ZERO   0U

/* Initial roll value */
#define NO_ROLL   0U

/* enum: player_side
 * Determines the context of player 
 * 
 */
typedef enum player_side
{
    FIRST_PLAYER = 0,
    SECOND_PLAYER
}Player_side;

/* struct: piece
 * Piece struct that contains all information of a piece that's in the board
 *
 * piece_image: Image that represents the piece 
 * location: The piece will know all the time where is at
 * side: The piece will know to which player it belongs to
 * 
 */
typedef struct piece
{
    GtkWidget* piece_image;
    unsigned int location;
    unsigned char side;
}Piece;

/* struct: player
 * Player struct that contains all the fields needed for a player
 * 
 * name: Player's name
 * roll: Dice roll value obtained by the player in the turn
 * pieces_left: Total pieces left for a player that are not in board
 * score: Number of pieces that a player has taken to exit.
 * turn: Defines if is player's turn
 * 
 */
typedef struct player
{
    GtkWidget* roll_label;
    Player_side plyr_side;
    unsigned int roll;
    unsigned int pieces_left;
    unsigned int score;
    unsigned char turn;
}Player;

/* struct: square
 * Square struct that contains all the fields use for a square
 * 
 * button: Each square is actually a Gtk button
 * id: Identification number for each square, there cannot be 2 identical id's
 * occupied: Will tell if square is occupied by a piece
 * 
 */
typedef struct square
{
   GtkWidget* button;
   unsigned int id;
   bool occupied;
}Square;

/* Function: initialize_player
 * 
 * Initializes the structure of players
 * 
 */
void initialize_player(Player* plyr, Player_side which_player);

/* Function: initialize_player
 *
 * Initializes the structure of pieces
 * 
 */
void initialize_piece(Piece* pc, Player_side which_player);

/* Function: initialize_square
 *
 * Initializes the structure of squares
 * 
 */
void initialize_square(Square* sq, GtkWidget* image);

#endif /*GAME_TOOLS_H*/