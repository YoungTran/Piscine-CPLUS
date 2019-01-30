# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/11 19:58:04 by ytran             #+#    #+#              #
#    Updated: 2018/10/11 19:58:06 by ytran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Array

SRC		= main.cpp

CFLAG	= -Wall -Wextra -Werror

.SILENT:

all: $(NAME)

$(NAME):
	clang++ $(CFLAG) $(SRC) -I . -o $(NAME)

clean:
	/bin/rm -f *.o
	
fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean re all test
