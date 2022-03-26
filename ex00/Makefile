NAME	=	zombie

SRCS	=	Zombie.cpp main.cpp

OBJS	=	${SRCS:.c=.o}

FLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	c++ $(SRCS) -I. -o $(NAME)

clean:
	rm -f $(NAME)

re:	clean all

.PHONY:	all clean fclean re