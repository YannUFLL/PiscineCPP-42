SRCS =	$(wildcard *.cpp)
OBJS = ${SRCS:.cpp=.o}

NAME = a.out

CC = c++

LINK = c++ -o

RM = rm -f

HEADER = -I include/ 

CFLAGS = -Werror -Wextra -Wall -std=c++98 
#-g -fsanitize=address

.cpp.o: 
			${CC} ${FLAGS} -c $< -o ${<:.cpp=.o} ${HEADER} 

${NAME}:	${OBJS}
			${LINK} ${NAME} ${OBJS}
#-g -fsanitize=address

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:     clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
