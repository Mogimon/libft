# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Target executable
NAME = libft.a

# Source files
SRCS = ft_isalpha.c ft_isdigit.c

# Bonus files
BONUS = ft_lstnew.c

# Default rule
all: $(NAME)

# Rule to link the target executable
$(NAME):$(SRCS)
	@cc $(CFLAGS) -c $(SRCS) -I./
	@ar rcs $(NAME) *.o
	@echo "build libft.a"

bonus:
	@cc $(CFLAGS) -c $(SRCS) $(BONUS) -I./
	@ar rcs $(NAME) *.o
	@echo "build libft.a bonus"

# Clean rule to remove generated files
clean:
	@rm -f *.o
	@echo "LIBFT clean up all object!"

fclean: clean
	@rm -f $(NAME)
	@echo "LIBFT Fully clean already"

# Rebuild Target
re: fclean all

.PHONY: clean fclean all re  