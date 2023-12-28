#include "../hangman.h"

int main(int argc, char **argv)
{
	t_hangman t_hangman;
	if (!(t_hangman.mlx = mlx_init(WIDTH, HEIGHT, "Hangman", false)))
	{
		puts(mlx_strerror(mlx_errno));
		return 0;
	}
	init(&t_hangman);
	if (argv[1] != NULL)
	{
		t_hangman.word = argv[1];
		t_hangman.word_size = strlen(argv[1]);
	}
	display_base(&t_hangman);
	mlx_key_hook(t_hangman.mlx, (mlx_keyfunc)key_press, &t_hangman);
	mlx_loop(t_hangman.mlx);
	mlx_terminate(t_hangman.mlx);
	return (0);
}

void	key_press(mlx_key_data_t keydata ,t_hangman *t_hangman)
{
	int letter_in_word;
	int i = 0;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_RELEASE)
		mlx_close_window(t_hangman->mlx);
	if (t_hangman->verif_loose < 7)
	{
		if (keydata.key == MLX_KEY_A && keydata.action == MLX_RELEASE) 
		{
			rod_letter(t_hangman, 'a');
			letter_in_word = verif_letter(t_hangman, 'a');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'a');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_A, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'a');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_B && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'b');
			letter_in_word = verif_letter(t_hangman, 'b');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'b');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_B, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'b');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_C && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'c');
			letter_in_word = verif_letter(t_hangman, 'c');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'c');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_C, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'c');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_D && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'd');
			letter_in_word = verif_letter(t_hangman, 'd');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'd');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_D, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'd');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_E && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'e');
			letter_in_word = verif_letter(t_hangman, 'e');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'e');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_E, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'e');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_F && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'f');
			letter_in_word = verif_letter(t_hangman, 'f');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'f');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_F, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'f');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_G && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'g');
			letter_in_word = verif_letter(t_hangman, 'g');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'g');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_G, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'g');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_H && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'h');
			letter_in_word = verif_letter(t_hangman, 'h');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'h');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_H, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'h');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_I && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'i');
			letter_in_word = verif_letter(t_hangman, 'i');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'i');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_i, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'i');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_J && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'j');
			letter_in_word = verif_letter(t_hangman, 'j');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'j');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_J, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'j');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_K && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'k');
			letter_in_word = verif_letter(t_hangman, 'k');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'k');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_K, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'k');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_L && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'l');
			letter_in_word = verif_letter(t_hangman, 'l');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'l');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_L, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'l');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_M && keydata.action == MLX_RELEASE) //M
		{
			rod_letter(t_hangman, 'm');
			letter_in_word = verif_letter(t_hangman, 'm');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'm');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_M, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'm');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_N && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'n');
			letter_in_word = verif_letter(t_hangman, 'n');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'n');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_N, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'n');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_O && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'o');
			letter_in_word = verif_letter(t_hangman, 'o');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'o');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_O, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'o');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_P && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'p');
			letter_in_word = verif_letter(t_hangman, 'p');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'p');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_P, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'p');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_Q && keydata.action == MLX_RELEASE) // Q
		{
			rod_letter(t_hangman, 'q');
			letter_in_word = verif_letter(t_hangman, 'q');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'q');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_Q, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'q');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_R && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'r');
			letter_in_word = verif_letter(t_hangman, 'r');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'r');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_R, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'r');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_S && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 's');
			letter_in_word = verif_letter(t_hangman, 's');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 's');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_S, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 's');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_T && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 't');
			letter_in_word = verif_letter(t_hangman, 't');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 't');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_T, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 't');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_U && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'u');
			letter_in_word = verif_letter(t_hangman, 'u');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'u');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_U, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'u');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_V && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'v');
			letter_in_word = verif_letter(t_hangman, 'v');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'v');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_V, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'v');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_W && keydata.action == MLX_RELEASE) // W
		{
			rod_letter(t_hangman, 'w');
			letter_in_word = verif_letter(t_hangman, 'w');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'w');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_W, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'w');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_X && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'x');
			letter_in_word = verif_letter(t_hangman, 'x');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'x');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_X, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'x');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_Y && keydata.action == MLX_RELEASE)
		{
			rod_letter(t_hangman, 'y');
			letter_in_word = verif_letter(t_hangman, 'y');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'y');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_Y, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'y');
				t_hangman->verif_loose +=1;
			}
		}
		else if (keydata.key == MLX_KEY_Z && keydata.action == MLX_RELEASE) // Z
		{
			rod_letter(t_hangman, 'z');
			letter_in_word = verif_letter(t_hangman, 'z');
			if (letter_in_word != 0)
			{
				pos_letter_in_word(t_hangman, 'z');
				while (i < letter_in_word)
				{
					mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_Z, (300 + (t_hangman->letter_pos[i] * 75)), 385);
					i++;
				}
			}
			else
			{
				bad_letter(t_hangman, 'z');
				t_hangman->verif_loose +=1;
			}
		}
	}
	else
		display_loose(t_hangman);
	return ;
}

void	display_loose(t_hangman *t_hangman)
{
	mlx_image_to_window(t_hangman->mlx, t_hangman->img.fond_loose_hangman, 0, 0);
	int i = 0;
	int j = 300;
	while (i < t_hangman->word_size)
	{
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_under_letter, j, 395);
		j += 75;
		i++;
	}
	i = 0;
	j = 300;
	while (i < t_hangman->word_size)
	{
		if (t_hangman->word[i] == 'a')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_A, j, 385);
		else if (t_hangman->word[i] == 'b')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_B, j, 385);
		else if (t_hangman->word[i] == 'c')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_C, j, 385);
		else if (t_hangman->word[i] == 'd')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_D, j, 385);
		else if (t_hangman->word[i] == 'e')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_E, j, 385);
		else if (t_hangman->word[i] == 'f')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_F, j, 385);
		else if (t_hangman->word[i] == 'g')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_G, j, 385);
		else if (t_hangman->word[i] == 'h')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_H, j, 385);
		else if (t_hangman->word[i] == 'i')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_i, j, 385);
		else if (t_hangman->word[i] == 'j')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_J, j, 385);
		else if (t_hangman->word[i] == 'k')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_K, j, 385);
		else if (t_hangman->word[i] == 'l')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_L, j, 385);
		else if (t_hangman->word[i] == 'm')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_M, j, 385);
		else if (t_hangman->word[i] == 'n')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_N, j, 385);
		else if (t_hangman->word[i] == 'o')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_O, j, 385);
		else if (t_hangman->word[i] == 'p')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_P, j, 385);
		else if (t_hangman->word[i] == 'q')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_Q, j, 385);
		else if (t_hangman->word[i] == 'r')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_R, j, 385);
		else if (t_hangman->word[i] == 's')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_S, j, 385);
		else if (t_hangman->word[i] == 't')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_T, j, 385);
		else if (t_hangman->word[i] == 'u')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_U, j, 385);
		else if (t_hangman->word[i] == 'v')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_V, j, 385);
		else if (t_hangman->word[i] == 'w')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_W, j, 385);
		else if (t_hangman->word[i] == 'x')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_X, j, 385);
		else if (t_hangman->word[i] == 'y')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_Y, j, 385);
		else if (t_hangman->word[i] == 'z')
			mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_letter_Z, j, 385);
		j += 75;
		i++;
	}
	return ;
}

void	rod_letter(t_hangman *t_hangman, char letter)
{
	/*barrer la lettre dans la liste*/
	if (letter == 'a')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 470, 95);
	else if (letter == 'b')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 500, 95);
	else if (letter == 'c')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 540, 95);
	else if (letter == 'd')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 570, 95);
	else if (letter == 'e')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 605, 95);
	else if (letter == 'f')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 638, 95);
	else if (letter == 'g')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 675, 95);
	else if (letter == 'h')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 710, 95);
	else if (letter == 'i')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 732, 95);
	else if (letter == 'j')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 757, 95);
	else if (letter == 'k')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 785, 95);
	else if (letter == 'l')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 819, 95);
	else if (letter == 'm')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 855, 95);
	else if (letter == 'n')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 885, 95);
	else if (letter == 'o')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 490, 150);
	else if (letter == 'p')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 525, 150);
	else if (letter == 'q')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 560, 150);
	else if (letter == 'r')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 592, 150);
	else if (letter == 's')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 625, 150);
	else if (letter == 't')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 662, 150);
	else if (letter == 'u')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 695, 150);
	else if (letter == 'v')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 730, 150);
	else if (letter == 'w')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 765, 150);
	else if (letter == 'x')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 795, 150);
	else if (letter == 'y')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 830, 150);
	else if (letter == 'z')
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bad_letter, 868, 150);
}


void	bad_letter(t_hangman *t_hangman, char letter)
{
	/*afficher membre*/
	if (t_hangman->verif_loose == 0)
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_head, 273, 144);
	else if (t_hangman->verif_loose == 1)
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_bust, 273, 194);
	else if (t_hangman->verif_loose == 2)
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_left_arm, 248, 180);
	else if (t_hangman->verif_loose == 3)
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_right_arm, 298, 180);
	else if (t_hangman->verif_loose == 4)
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_left_leg, 259, 242);
	else if (t_hangman->verif_loose == 5)
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_right_leg, 288, 242);
	return ;
}

void	pos_letter_in_word(t_hangman *t_hangman, char letter)
{
	int i = 0;
	int j = 0;
	while (i < t_hangman->word_size)
	{
		if (t_hangman->word[i] == letter)
		{
			t_hangman->letter_pos[j] = i;
			j++;
		}
		i++;
	}
}

int	verif_letter(t_hangman *t_hangman, char letter)
{
	int i = 0;
	int ret = 0;
	while (i < t_hangman->word_size)
	{
		if (t_hangman->word[i] == letter)
			ret++;
		i++;
	}
	return (ret);
}

void	display_base(t_hangman *t_hangman)
{
	mlx_image_to_window(t_hangman->mlx, t_hangman->img.fond_hangman, 0, 0);
	int i = 0;
	int j = 300;
	while (i < t_hangman->word_size)
	{
		mlx_image_to_window(t_hangman->mlx, t_hangman->img.img_under_letter, j, 395);
		j += 75;
		i++;
	}
	return ;
}