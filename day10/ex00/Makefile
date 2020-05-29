# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trahman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 15:23:01 by trahman           #+#    #+#              #
#    Updated: 2020/02/17 18:00:01 by trahman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_swap.c \
	   srcs/ft_putstr.c srcs/ft_strlen.c

all: $(NAME)

OBJECTS = ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o

INCLUDES = includes/

$(NAME):
	gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
	ar rc libft.a $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
