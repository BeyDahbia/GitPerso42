# Makefile template for a shared library in C
NAME = libftprintf.a
CC = gcc  # C compiler
CFLAGS = -Wall -Werror -Wextra -I. -Ilibft/. -c  # C flags
#CFLAGS =  -I. -Ilibft/. -c  # C flags
RM = rm -f   # rm command
LB_NAME =   libft.a
LIB_DIR =   ./Libft
#include all your main .c files here
SRCS =	ft_printf.c \
		#c_parser.c \
		s_parser.c \
		p_parser.c \
		d_parser.c \
		u_parser.c \
		x_parser.c \
		per_parser.c \
		ft_printf1.c \

OBJS = $(SRCS:.c=.o)

all: ${NAME}
${LIB_DIR}/${LB_NAME}:
		${MAKE} -C $(LIB_DIR)
$(NAME): $(OBJS) ${LIB_DIR}/${LB_NAME}
	cp $(LIB_DIR)/$(LB_NAME) ./$(NAME)
	ar rc $@ $(OBJS)
	/bin/rm -f $(LB_NAME)
	ranlib $(NAME)
$(OBJS):$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJS) $(B_OBJS)
	${MAKE} -C $(LIB_DIR) fclean
fclean: clean
	rm -f $(NAME)
	${MAKE} -C $(LIB_DIR) fclean
re: fclean all
# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re