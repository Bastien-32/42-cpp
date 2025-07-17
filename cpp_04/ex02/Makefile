NAME = Abstract_class

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

SRC =	src/main.cpp \
		src/AAnimal.cpp \
		src/Brain.cpp \
		src/Cat.cpp \
		src/Dog.cpp \
		src/WrongAnimal.cpp \
		src/WrongCat.cpp

OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "✅ $(NAME) compiled !"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "✅ $(NAME) objects removed !"

fclean: clean
	@rm -f $(NAME)
	@echo "✅ executable $(NAME) removed !"

re: fclean all

.PHONY: all clean fclean re 
