CC = cc

CFLAGS = -Wall -Werror -Wextra -g

SRCS = main.c   ##here put every .c that the exec need

OBJS = $(SRCS:.c=.o) ##obj are .o files made from compiling .c files with the -c option, here we tell the make file that we want every SRCS but replacing the extension .c by .o

NAME = rush-02 ##name of the exec

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean 
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
