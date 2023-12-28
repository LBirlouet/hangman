#include "../hangman.h"

void	init(t_hangman *t_hangman)
{
	srand((unsigned int)time(NULL));

	char *biblio[] = {
		"pomme",
		"route",
		"futur",
		"aralar",
		"minute",
		"texture",
		"patron",
		"origine",
		"message",
		"chaleur",
		"vision",
		"girafe",
		"explorer",
		"lapin",
		"oignon",
		"eclair",
		"jouer",
		"chance",
		"fleur",
		"plage",
		"etoile",
		"flamme",
		"rouge",
		"vert",
		"livre",
		"coeur",
		"couteau",
		"sable",
		"route",
		"avion",
		"ombre",
		"reve",
		"cle",
		"piano",
		"pain",
		"voile",
		"lune",
		"soleil",
		"gazon",
		"table",
		"poisson",
		"conte",
		"ruche",
		"marche",
		"orange",
		"lampe",
		"blanc",
		"noir",
		"bateau",
		"tigre",
		"vague",
		"cheval",
		"fete",
		"plume",
		"fusee",
		"arcade",
		"gris",
		"ciel",
		"loup",
		"route",
		"champ",
		"ecran",
		"espace",
		"oiseau",
		"globe",
		"cadeau"
		"balle",
		"brumeux",
		"noel",
		"humour",
		"spectacle",
		"aventure",
		"popcorn",
		"soeur",};

	int index = rand() % (sizeof(biblio) / sizeof(biblio[0]));
	t_hangman->word_size = strlen(biblio[index]);
	t_hangman->word = malloc(sizeof(char) * (t_hangman->word_size + 1));
	t_hangman->word = strcpy(t_hangman->word, biblio[index]);
	t_hangman->word[t_hangman->word_size] = '\0';
	// t_hangman->copy_word = malloc(sizeof(char) * (t_hangman->word_size + 1));
	// t_hangman->word = strcpy(t_hangman->word, t_hangman->word);
	// t_hangman->word[t_hangman->word_size] = '\0';
	int i = 0;
	t_hangman->letter_pos = malloc(sizeof(int) * 10);
	while (i < 10)
	{
		t_hangman->letter_pos[i] = 0;
		i++;
	}
	t_hangman->verif_loose = 0;

/*----------------------------------------FOND--------------------------------------------------------------------------------------------------------*/	
/**/	t_hangman->img.texture_fond_hangman = mlx_load_png("img/fond.png");																			/**/
/**/	t_hangman->img.fond_hangman = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_fond_hangman);									/**/
/**/	t_hangman->img.texture_fond_loose_hangman = mlx_load_png("img/loose.png");																	/**/
/**/	t_hangman->img.fond_loose_hangman = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_fond_loose_hangman);						/**/
/*----------------------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------OTHERS-------------------------------------------------------------------------------------------------------*/
/**/	t_hangman->img.texture_under_letter = mlx_load_png("img/under_letter.png");																	/**/
/**/	t_hangman->img.img_under_letter = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_under_letter);								/**/
/**/	t_hangman->img.texture_bad_letter = mlx_load_png("img/handman_bad_letter.png");																/**/
/**/	t_hangman->img.img_bad_letter = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_bad_letter);									/**/
/*----------------------------------------------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------HANGMAN----------------------------------------------------------------------------------------------------*/
/**/	t_hangman->img.texture_head = mlx_load_png("img/handman_head.png");																			/**/
/**/	t_hangman->img.img_head = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_head);												/**/
/**/	t_hangman->img.texture_bust = mlx_load_png("img/handman_bust.png");																			/**/
/**/	t_hangman->img.img_bust = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_bust);												/**/
/**/	t_hangman->img.texture_left_arm = mlx_load_png("img/handman_left_arm.png");																	/**/
/**/	t_hangman->img.img_left_arm = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_left_arm);										/**/
/**/	t_hangman->img.texture_right_arm = mlx_load_png("img/handman_right_arm.png");																/**/
/**/	t_hangman->img.img_right_arm = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_right_arm);										/**/
/**/	t_hangman->img.texture_left_leg = mlx_load_png("img/handman_left_leg.png");																	/**/
/**/	t_hangman->img.img_left_leg = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_left_leg);										/**/
/**/	t_hangman->img.texture_right_leg = mlx_load_png("img/handman_right_leg.png");																/**/
/**/	t_hangman->img.img_right_leg = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_right_leg);										/**/
/*----------------------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------LETTERS------------------------------------------------------------------------------------------------------*/
/**/	t_hangman->img.texture_letter_A = mlx_load_png("img/letters/letter_A.png");																	/**/
/**/	t_hangman->img.img_letter_A = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_A);										/**/
/**/	t_hangman->img.texture_letter_B = mlx_load_png("img/letters/letter_B.png");																	/**/
/**/	t_hangman->img.img_letter_B = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_B);										/**/
/**/	t_hangman->img.texture_letter_C = mlx_load_png("img/letters/letter_C.png");																	/**/
/**/	t_hangman->img.img_letter_C = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_C);										/**/
/**/	t_hangman->img.texture_letter_D = mlx_load_png("img/letters/letter_D.png");																	/**/
/**/	t_hangman->img.img_letter_D = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_D);										/**/
/**/	t_hangman->img.texture_letter_E = mlx_load_png("img/letters/letter_E.png");																	/**/
/**/	t_hangman->img.img_letter_E = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_E);										/**/
/**/	t_hangman->img.texture_letter_F = mlx_load_png("img/letters/letter_F.png");																	/**/
/**/	t_hangman->img.img_letter_F = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_F);										/**/
/**/	t_hangman->img.texture_letter_G = mlx_load_png("img/letters/letter_G.png");																	/**/
/**/	t_hangman->img.img_letter_G = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_G);										/**/
/**/	t_hangman->img.texture_letter_H = mlx_load_png("img/letters/letter_H.png");																	/**/
/**/	t_hangman->img.img_letter_H = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_H);										/**/
/**/	t_hangman->img.texture_letter_i = mlx_load_png("img/letters/letter_i.png");																	/**/
/**/	t_hangman->img.img_letter_i = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_i);										/**/
/**/	t_hangman->img.texture_letter_J = mlx_load_png("img/letters/letter_J.png");																	/**/
/**/	t_hangman->img.img_letter_J = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_J);										/**/
/**/	t_hangman->img.texture_letter_K = mlx_load_png("img/letters/letter_K.png");																	/**/
/**/	t_hangman->img.img_letter_K = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_K);										/**/
/**/	t_hangman->img.texture_letter_L = mlx_load_png("img/letters/letter_L.png");																	/**/
/**/	t_hangman->img.img_letter_L = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_L);										/**/
/**/	t_hangman->img.texture_letter_M = mlx_load_png("img/letters/letter_M.png");																	/**/
/**/	t_hangman->img.img_letter_M = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_M);										/**/
/**/	t_hangman->img.texture_letter_N = mlx_load_png("img/letters/letter_N.png");																	/**/
/**/	t_hangman->img.img_letter_N = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_N);										/**/
/**/	t_hangman->img.texture_letter_O = mlx_load_png("img/letters/letter_O.png");																	/**/
/**/	t_hangman->img.img_letter_O = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_O);										/**/
/**/	t_hangman->img.texture_letter_P = mlx_load_png("img/letters/letter_P.png");																	/**/
/**/	t_hangman->img.img_letter_P = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_P);										/**/
/**/	t_hangman->img.texture_letter_Q = mlx_load_png("img/letters/letter_Q.png");																	/**/
/**/	t_hangman->img.img_letter_Q = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_Q);										/**/
/**/	t_hangman->img.texture_letter_R = mlx_load_png("img/letters/letter_R.png");																	/**/
/**/	t_hangman->img.img_letter_R = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_R);										/**/
/**/	t_hangman->img.texture_letter_S = mlx_load_png("img/letters/letter_S.png");																	/**/
/**/	t_hangman->img.img_letter_S = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_S);										/**/
/**/	t_hangman->img.texture_letter_T = mlx_load_png("img/letters/letter_T.png");																	/**/
/**/	t_hangman->img.img_letter_T = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_T);										/**/
/**/	t_hangman->img.texture_letter_U = mlx_load_png("img/letters/letter_U.png");																	/**/
/**/	t_hangman->img.img_letter_U = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_U);										/**/
/**/	t_hangman->img.texture_letter_V = mlx_load_png("img/letters/letter_V.png");																	/**/
/**/	t_hangman->img.img_letter_V = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_V);										/**/
/**/	t_hangman->img.texture_letter_W = mlx_load_png("img/letters/letter_W.png");																	/**/
/**/	t_hangman->img.img_letter_W = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_W);										/**/
/**/	t_hangman->img.texture_letter_X = mlx_load_png("img/letters/letter_X.png");																	/**/
/**/	t_hangman->img.img_letter_X = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_X);										/**/
/**/	t_hangman->img.texture_letter_Y = mlx_load_png("img/letters/letter_Y.png");																	/**/
/**/	t_hangman->img.img_letter_Y = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_Y);										/**/
/**/	t_hangman->img.texture_letter_Z = mlx_load_png("img/letters/letter_Z.png");																	/**/
/**/	t_hangman->img.img_letter_Z = mlx_texture_to_image(t_hangman->mlx, t_hangman->img.texture_letter_Z);										/**/
/*----------------------------------------------------------------------------------------------------------------------------------------------------*/

	return ;
}