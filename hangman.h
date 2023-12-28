#ifndef HANGMAN_H
# define HANGMAN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "MLX42/include/MLX42/MLX42.h"

#define WIDTH 1000
#define HEIGHT 500


typedef struct s_img{
/*---------------------------FOND-----------------------------------*/
mlx_texture_t	*texture_fond_hangman;	
mlx_image_t		*fond_hangman;	
mlx_texture_t	*texture_fond_loose_hangman;	
mlx_image_t		*fond_loose_hangman;	
/*------------------------------------------------------------------*/
/*---------------------------PERSO----------------------------------*/
mlx_texture_t	*texture_head;	
mlx_image_t		*img_head;
mlx_texture_t	*texture_bust;	
mlx_image_t		*img_bust;
mlx_texture_t	*texture_left_arm;	
mlx_image_t		*img_left_arm;
mlx_texture_t	*texture_right_arm;	
mlx_image_t		*img_right_arm;
mlx_texture_t	*texture_left_leg;	
mlx_image_t		*img_left_leg;
mlx_texture_t	*texture_right_leg;	
mlx_image_t		*img_right_leg;
/*------------------------------------------------------------------*/
/*----------------------------LETTERS-------------------------------*/
mlx_texture_t	*texture_under_letter;	
mlx_image_t		*img_under_letter;	
mlx_texture_t	*texture_bad_letter;	
mlx_image_t		*img_bad_letter;	
mlx_texture_t	*texture_letter_A;	
mlx_image_t		*img_letter_A;	
mlx_texture_t	*texture_letter_B;	
mlx_image_t		*img_letter_B;	
mlx_texture_t	*texture_letter_C;	
mlx_image_t		*img_letter_C;	
mlx_texture_t	*texture_letter_D;	
mlx_image_t		*img_letter_D;	
mlx_texture_t	*texture_letter_E;	
mlx_image_t		*img_letter_E;	
mlx_texture_t	*texture_letter_F;	
mlx_image_t		*img_letter_F;	
mlx_texture_t	*texture_letter_G;	
mlx_image_t		*img_letter_G;	
mlx_texture_t	*texture_letter_H;	
mlx_image_t		*img_letter_H;	
mlx_texture_t	*texture_letter_i;	
mlx_image_t		*img_letter_i;	
mlx_texture_t	*texture_letter_J;	
mlx_image_t		*img_letter_J;	
mlx_texture_t	*texture_letter_K;	
mlx_image_t		*img_letter_K;	
mlx_texture_t	*texture_letter_L;	
mlx_image_t		*img_letter_L;	
mlx_texture_t	*texture_letter_M;	
mlx_image_t		*img_letter_M;	
mlx_texture_t	*texture_letter_N;	
mlx_image_t		*img_letter_N;	
mlx_texture_t	*texture_letter_O;	
mlx_image_t		*img_letter_O;	
mlx_texture_t	*texture_letter_P;	
mlx_image_t		*img_letter_P;	
mlx_texture_t	*texture_letter_Q;	
mlx_image_t		*img_letter_Q;	
mlx_texture_t	*texture_letter_R;	
mlx_image_t		*img_letter_R;	
mlx_texture_t	*texture_letter_S;	
mlx_image_t		*img_letter_S;	
mlx_texture_t	*texture_letter_T;	
mlx_image_t		*img_letter_T;	
mlx_texture_t	*texture_letter_U;	
mlx_image_t		*img_letter_U;	
mlx_texture_t	*texture_letter_V;	
mlx_image_t		*img_letter_V;	
mlx_texture_t	*texture_letter_W;	
mlx_image_t		*img_letter_W;	
mlx_texture_t	*texture_letter_X;	
mlx_image_t		*img_letter_X;	
mlx_texture_t	*texture_letter_Y;	
mlx_image_t		*img_letter_Y;	
mlx_texture_t	*texture_letter_Z;	
mlx_image_t		*img_letter_Z;	
/*------------------------------------------------------------------*/

}				t_img;


typedef struct s_hangman{
mlx_t	*mlx;
t_img	img;
int		word_size;
char	*word;
char	*copy_word;
int		verif_loose;
int		*letter_pos;
}				t_hangman;


int main(int argc, char **argv);
void	init(t_hangman *t_hangman);
void	display_base(t_hangman *t_hangman);
void	display_loose(t_hangman *t_hangman);
int		verif_letter(t_hangman *t_hangman, char letter);
void	key_press(mlx_key_data_t keydata ,t_hangman *t_hangman);
void	pos_letter_in_word(t_hangman *t_hangman, char letter);
void	bad_letter(t_hangman *t_hangman, char letter);
void	rod_letter(t_hangman *t_hangman, char letter);

#endif