# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 15:40:41 by ekordi            #+#    #+#              #
#    Updated: 2023/06/11 18:37:20 by ekordi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_split.c \
			ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c \
			ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_memset.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
			ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c \
			ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  \
			ft_strjoin.c ft_strtrim.c ft_isalpha.c ft_itoa.c\
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c
BSRCS	=	ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstnew.c ft_lstadd_front.c


OBJS	= $(SRCS:.c=.o)
BOBJS	= $(BSRCS:.c=.o)
OBJSS	= $(OBJS) $(BOBJS)

CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):$(OBJSS)
		ar rcs $(NAME) $(OBJSS)

bonus:	$(OBJS) $(OBJSS)
			ar rcs $(NAME) $(OBJSS)

clean:
		$(RM) $(OBJS) $(BOBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re bonus
