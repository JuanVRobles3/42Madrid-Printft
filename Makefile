# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 13:03:29 by jrobles-          #+#    #+#              #
#    Updated: 2022/08/10 16:34:59 by jrobles-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		ft_put.c \
		ft_puthexa.c \
		ft_putptr.c \
		ft_unsigned.c \
		ft_itoa.c \

OBJ = $(SRCS:.c=.o)
	
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -c $(SRCS)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(OBJ)

re: fclean all

.PHONY: fclean all clean re
