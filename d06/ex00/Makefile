NAME	= convert

SRC		= main.cpp Convert.cpp

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