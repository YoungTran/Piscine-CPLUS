# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 04:49:08 by ytran             #+#    #+#              #
#    Updated: 2018/10/02 04:49:09 by ytran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) $^ -o $(NAME)
./obj/%.o: ./srcs/%.cpp
	mkdir -p obj
	clang++ -c $< -o $@
clean:
	rm -rf $(NAME)
	/bin/rm -f *.o
	/bin/rm -rf ./obj/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all test