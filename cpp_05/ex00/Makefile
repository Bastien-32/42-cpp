NAME = Mommy_when_I_grow_up_I_want_to_be_a_bureaucrat

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

SRC =	src/main.cpp \
		src/Bureaucrat.cpp

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
