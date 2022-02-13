NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS = main.cpp phonebook.cpp contact.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(HEADER) -o $(NAME) $(OBJS)
%.o:%.cpp
	$(CC) $(CFLAGS) $(HEADER) -o $@ -c $<
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
