NAME = claptrap

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "🔨 Compiling [$(NAME)]..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	@echo "🔨 Compiling [$@]..."
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@echo "Deleting all objects..."; \

fclean: clean
	@rm -f $(NAME)
	@echo "Deleting $(NAME)..."; \

re: fclean all

.PHONY: all clean fclean re
