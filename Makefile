# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 20:56:56 by ekordi            #+#    #+#              #
#    Updated: 2023/06/11 20:24:59 by ekordi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
SRCS	= main.c parse.c swap.c push.c rotation.c checker.c sort_int.c utils.c sort.c
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
#  -fsanitize=address -g
LIBFTDIR = libft
LIBFT	= $(LIBFTDIR)/libft.a

all:	$(NAME)

$(NAME):$(LIBFT)
	$(CC) $(CFLAGS) -L$(LIBFTDIR) -lft $(SRCS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

fclean:	clean
		$(RM) $(NAME)

re:		fclean $(NAME)


.PHONY:	all clean fclean re bonus
