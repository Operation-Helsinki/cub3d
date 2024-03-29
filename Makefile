# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 13:27:49 by psegura-          #+#    #+#              #
#    Updated: 2023/03/25 03:44:28 by psegura-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D

SRCS =							\
		srcs/main.c				\
		srcs/draw.c				\
		srcs/key.c				\
		srcs/raycasting.c		\
		srcs/init_mlx.c			\
		srcs/init_parse.c		\
		srcs/utils.c			\
		srcs/store_file.c		\
		srcs/parse_file.c		\
		srcs/color.c			\

OBJS = $(SRCS:.c=.o)

LIB = libft/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3 -I inc -I libft -g3 -fsanitize=address

FLAGS_MLX = -lmlx -framework OpenGL -framework AppKit 

$(NAME): $(OBJS)
	@make -C libft
	$(CC) $(CFLAGS) $(FLAGS_MLX) $(OBJS) $(LIB) -o $(NAME)
	@echo "🏂 cub3D Done 🏂"

all: $(NAME)

clean:
	make clean -C libft
	@rm -rf $(OBJS)

fclean: clean
	make fclean -C libft
	@rm -f $(NAME)

re: fclean all

norma:
	@echo 6966205b5b2024286e6f726d696e65747465207c206772657020274572726f7227207c207763202d6c29202d65712030205d5d3b207468656e206e6f726d696e657474653b20656c736520286e6f726d696e65747465207c206772657020274572726f7227293b206669 | xxd -r -p | zsh

test:
	bash ./map_tester.sh
	
leaks:
	@echo 7768696c6520747275653b646f206c65616b7320736f5f6c6f6e673b20736c65657020323b20646f6e653b | xxd -r -p | zsh
	
.PHONY: all clean fclean re norma test leaks