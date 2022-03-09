# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 14:02:13 by yamzil            #+#    #+#              #
#    Updated: 2022/03/09 16:44:56 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INC = push_swap.h

SRC =	libft/ft_atoi.c \
		libft/ft_isdigit.c \
		libft/ft_lstnew.c \
		libft/ft_strlen.c \
		libft/ft_split.c \
		libft/ft_substr.c \
		libft/ft_strjoin.c \
		push_swap.c \
		ft_handler.c \
		ft_instructions.c \
		ft_sorted.c \
		ft_fillstack.c \
		ft_sortthree.c \
		 ft_sorthfive.c \
		
OBJ = $(SRC:.c=.o) 

CC = gcc

LIB = libft

CFLAGS = -Wall -Werror -Wextra 

all:	$(NAME)

$(NAME) : $(INC) $(OBJ)
	@$(CC) $(CFLAGS) $(SRC) -I $(INC) -o $(NAME)
	
clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(OBJ) $(NAME)

re:
	clean all