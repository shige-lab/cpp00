NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
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
