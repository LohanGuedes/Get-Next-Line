##
# Get next Line
#
# @file
# @version 0.1

CC = clang
CFLAGS = -Wall -Wextra -Werror

SRCS	= main.c get_next_line.c get_next_line_utils.c

OBJS	= ${SRCS:.c=.o}

SRCS_BONUS = main.c get_next_line_bonus.c get_next_line_utils.c

.c.o:
	${CC} ${CFLAGS} -c $< -o ${$<.c=.o}

$(NAME): ${OBJS}
		${CC} ${CFLAGS} ${NAME} ${OBJS}


all:	$(NAME)
	${CC} ${CFLAGS} ${SRCS} -o main

test:	$(NAME)
	${CC} ${CFLAGS} ${SRCS} -o test

bonus:		$(NAME)
			${CC} ${CFLAGS} ${SRCS_BONUS} -o bonus

clean:
			${RM} ${OBJS}
			${RM} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re

# end
