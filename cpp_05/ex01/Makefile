NAME = Form_up_maggots

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

SRC =	src/main.cpp \
		src/Bureaucrat.cpp \
		src/Form.cpp

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
