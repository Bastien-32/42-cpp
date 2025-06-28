NAME = phonebook

CC = c++
#CFLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = -std=c++98

SRC = src/tests.cpp \
		src/Account.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "✅ $(NAME) compiled !"

clean:
	@rm -f $(OBJ)
	@echo "✅ $(NAME) objects removed !"

fclean: clean
	@rm -f $(NAME)
	@echo "✅ executable $(NAME) removed !"

re: fclean all

.PHONY: all clean fclean re 
