# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 20:04:08 by afrasch           #+#    #+#              #
#    Updated: 2021/10/30 11:24:45 by afrasch          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
ft_formspec.c \
ft_hex.c \
ft_putchar.c \
ft_putptr.c \
ft_putu.c \
ft_putnbr.c \
ft_hexcap.c \
ft_putstr.c \

OBJ = $(SRC:.c=.o)

LIBRARY = ./libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

AR = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): compile
	$(AR) $(NAME) $(OBJ) $(LIBRARY)/*.o
	ar -t $(NAME)

compile:
	$(MAKE) -C libft
	$(CC) $(CFLAGS) $(SRC)

clean:
	$(RM) $(OBJ) $(LIBRARY)/*.o

fclean: clean
	$(RM) $(NAME) $(LIBRARY)/*.o $(LIBRARY)/*.a

re: fclean all

bonus: all
