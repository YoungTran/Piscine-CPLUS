# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgonor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/28 14:16:01 by dgonor            #+#    #+#              #
#    Updated: 2018/10/14 20:06:21 by ytran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

SRC =	CPUmodule.cpp \
		RAMmodule.cpp \
		main.cpp \
		IMonitorDisplay.cpp \
		IMonitorModule.cpp \
		Module.cpp \
		NCursesDiplay.cpp \
		OSModule.cpp \
		HostModule.cpp \
		DateModule.cpp \
		NetworkModule.cpp \
		UniCorn.cpp \
		SFMLDisplay.cpp


SFML = DYLD_FRAMEWORK_PATH="$(PWD)/SFML/Frameworks"

OB = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror 

NCURSES = -lncurses
.PHONY: all clean fclean re sfml

all: $(NAME)



$(NAME):
		@clang++ -c $(SRC) $(FLAGS) -I./SFML/include
		@clang++ $(OB) -o $(NAME) $(NCURSES) -L./SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
		@echo "\x1b[35mYour PROGRAM $(NAME) has been successfully created!\x1b[0m"

sfml: 
	@echo export $(SFML)
error:
	@echo "\x1b[35m Just type in terminal \"export LD_LIBRARY_PATH=./SFML/lib\" and press entre\x1b[0m"
	@echo "\x1b[35m => than\x1b[0m"
	@echo "\x1b[35m Type second command in terminal \"export DYLD_FRAMEWORK_PATH=./SFML/Frameworks\"\x1b[0m"

clean:
		@rm -rf $(OB)
		@echo "\x1b[36mYour PROGRAM $(NAME) has been Cleaned!\x1b[0m"

fclean: clean
		@rm -rf $(NAME)
		@echo "\x1b[32mYour PROGRAM $(NAME) has been successfully Deleted!\x1b[0m"

re: fclean all

