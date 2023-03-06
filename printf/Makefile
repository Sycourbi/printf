# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 12:45:12 by sycourbi          #+#    #+#              #
#    Updated: 2022/11/22 14:16:26 by sycourbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ./ft_printf.c \
       ./ft_putchar_fd.c \
       ./ft_putstr_fd.c \
       ./ft_strlen.c \
       ./ft_putnbr_fd.c \
       ./ft_hexa.c \
       ./ft_putunsigint_fd.c \
       

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I.
# -c sert a creer le fichier objet
# -o sert a creer le fichier executable
# -include sert a inclure ma librairie

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
# -c sert a creer l'archive
# -s sert a ecrire un index des fichier objets dans l'archive ou mettre a jour
# -r sert a inserer des fichiers membre dans l'archive avec remplacement

clean:
	rm -f $(OBJS)
# -f sert a ne pas demander de confirmation pour supprimer

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
