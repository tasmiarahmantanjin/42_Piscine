# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trahman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 15:21:48 by trahman           #+#    #+#              #
#    Updated: 2020/02/20 15:25:34 by trahman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
C_FILES = display_file.c

.PHONY: all clean fclean

all:
	gcc-wall-Wextra -Werror -o $(NAME) $(C_FILES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
