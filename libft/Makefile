# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjacqual <gjacqual@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 17:47:04 by gjacqual          #+#    #+#              #
#    Updated: 2021/07/19 21:09:58 by gjacqual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_memset.c\
	ft_isdigit.c\
	ft_isalpha.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_bzero.c\
	ft_atoi.c\
	ft_memchr.c\
	ft_strlen.c\
	ft_strmapi.c\
	ft_strncmp.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_calloc.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_putnbr_fd.c\
	ft_strjoin.c\
	ft_putendl_fd.c\
	ft_itoa.c\
	ft_strdup.c\
	ft_strlcat.c\
	ft_strnstr.c\
	ft_strlcpy.c\
	ft_substr.c\
	ft_strtrim.c\
	ft_split.c
	
	
OBJS_DIR = objs/
OBJS 	= ${SRCS:.c=.o}
OBJECTS_PREFIXED = ${addprefix ${OBJS_DIR}, ${OBJS}}

CFLAGS	= -Wall -Wextra -Werror

CC	= gcc

RM	= rm -f

all: ${NAME}

${OBJS_DIR}%.o : %.c libft.h
	@mkdir -p ${OBJS_DIR}
	@echo "Compil: $<"
	@gcc ${CFLAGS} -c $< -o $@

${NAME}:  ${OBJECTS_PREFIXED} 
	ar rcs ${NAME} ${OBJECTS_PREFIXED}
	@echo "Libft is Ready"

clean:
		rm -rf ${OBJS_DIR}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
