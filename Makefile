# Program conf
NAME	= libftprintf.a

# Compilation Parameters
CC	:= clang



LIBFT	= libft

HEADERS_PATH	= includes/

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c\
	ft_processors.c\
	ft_printf_itoa_mod.c\
	ft_type_define.c\
	ft_printf_utils.c

OBJS_DIR = objs/
OBJS 	= ${SRCS:.c=.o}
OBJECTS_PREFIXED = ${addprefix ${OBJS_DIR}, ${OBJS}}

RM	= rm -f

${OBJS_DIR}%.o : %.c ${HEADERS_PATH}ft_printf.h
	@mkdir -p ${OBJS_DIR}
	@echo "Compil: $<"
	@${CC} ${CFLAGS} -c $< -o $@

LIBFT_OBJS	= ${LIBFT}*.o

all:	${NAME}
 
${NAME}: ${OBJECTS_PREFIXED} 
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	ar rcs ${NAME} ${OBJECTS_PREFIXED}
	@echo "FT_Printf is Ready"	

clean:
		${MAKE} -C ${LIBFT} clean
		rm -rf ${OBJS_DIR}

fclean: clean
		${RM} ${NAME} ${LIBFT}/libft.a

re:		fclean all

.PHONY: all clean fclean re