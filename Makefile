##
# Get next Line
#
# @file
# @version 0.1

CC = clang
CFLAGS = -Wall -Wextra -Werror

SRCS	= main.c get_next_line.c get_next_line_utils.c

OBJS	= ${SRCS:.c=.o}

# SRCS_BONUS = get_next_line_bonus.c get_next_line_bonus.c
# BONUS_OBJS	= ${SRCS_BONUS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${$<.c=.o}

$(NAME): ${OBJS}
		${CC} ${CFLAGS} ${NAME} ${OBJS}

# bonus:		${OBJS_BONUS}
# 			${AR_RC} ${NAME} ${OBJS_BONUS}

all:	$(NAME)
	${CC} ${CFLAGS} ${SRCS} -o main

test:	$(NAME)
	${CC} ${CFLAGS} ${SRCS} -o test

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re

# end
