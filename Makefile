NAME			= hangman

SRC				= 	srcs/hangman.c \
					srcs/init.c \


MLX				= libmlx42.a

MLX_PATH		= MLX42/build

CC				= cc

RM				= rm -f

OBJS			= ${SRC:.c=.o}

%.o: %.c
	$(CC) -c $< -o $@

all: ${NAME}
${NAME}: ${MLX} ${OBJS}
	${CC} -o ${NAME} ${OBJS} ${MLX} -L/opt/homebrew/lib -lglfw -framework Cocoa -framework OpenGL -framework IOKit

${MLX}:
	${MAKE} -C ${MLX_PATH}
	mv ${MLX_PATH}/${MLX} .

clean:
	${MAKE} clean -C ${MLX_PATH}
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} ${MLX}

re: fclean all

.PHONY: all clean fclean re