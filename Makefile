# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 14:40:05 by Mzblah            #+#    #+#              #
#    Updated: 2024/09/20 10:52:03 by mzblah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = ./srcs/

HEADER = ./includes/

CFLAGS = -Wall -Wextra -Werror

OPTION = -c -I $(HEADER)

SRCS =	$(SRC_DIR)ft_isalpha.c	\
		$(SRC_DIR)ft_isdigit.c	\
		$(SRC_DIR)ft_isalnum.c	\
		$(SRC_DIR)ft_isascii.c	\
		$(SRC_DIR)ft_isprint.c	\
		$(SRC_DIR)ft_strlen.c	\
		$(SRC_DIR)ft_memset.c	\
		$(SRC_DIR)ft_bzero.c	\
		$(SRC_DIR)ft_memcpy.c	\
		$(SRC_DIR)ft_strlcpy.c

OBJS = $(SRCS:.c=.o)

.c.o:
	cc $(CFLAGS) -c $< -o $@ -I $(HEADER)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

