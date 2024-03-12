# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aranaivo <aranaivo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 07:16:45 by aranaivo          #+#    #+#              #
#    Updated: 2024/03/12 15:57:25 by aranaivo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
FLAGS=-Wall -Wextra -Werror
SRCS = check_format.c \
		ft_print_hexa.c \
		ft_print_pointer.c \
		ft_printunsigned_int.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_printf.c 

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all