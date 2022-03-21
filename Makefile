# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 14:02:13 by yamzil            #+#    #+#              #
#    Updated: 2022/03/21 23:07:44 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INC = push_swap.h

SRC =	libft/ft_atoi.c \
		libft/ft_isdigit.c \
		libft/ft_strlen.c \
		libft/ft_putendl_fd.c \
		push_swap.c \
		ft_handler.c \
		ft_smallest.c \
		ft_instructions.c \
		ft_sorted.c \
		ft_fillstack.c \
		ft_sortthree.c \
		ft_sortfive.c  \
		ft_biggest.c \
		ft_sort_table.c \
		ft_tmpstack.c  \
		ft_sorthundred.c \
		ft_send_a.c \
		ft_sortfivehundred.c \
		ft_free.c \
		
SRC_BNS =	ft_checker.c \
			ft_fillstack.c \
			ft_instructions.c \
			libft/ft_atoi.c \
			libft/ft_isdigit.c \
			libft/ft_putendl_fd.c \
			Get_Next_line/get_next_line.c \
			Get_Next_line/get_next_line_utils.c \
			libft/ft_strncmp.c \
		
OBJ = $(SRC:.c=.o) 

OBJ_BN = $(SRC_BNS:.c=.o)

NM = checker

CC = gcc

LIB = libft

CFLAGS = -Wall -Werror -Wextra 

all:	$(NAME)

$(NAME) : $(INC) $(OBJ)
	@$(CC) $(CFLAGS) $(SRC) -I $(INC) -o $(NAME)

bonus : $(INC) $(OBJ_BN)
	@$(CC) $(CFLAGS) $(SRC_BNS) -I $(INC) -o $(NM)
	
clean:
	@-rm -rf $(OBJ) $(OBJ_BN)

fclean:
	@-rm -rf $(OBJ) $(NAME) $(NM)

re:
	clean all