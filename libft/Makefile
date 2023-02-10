# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 13:35:08 by tstrassb          #+#    #+#              #
#    Updated: 2023/02/09 09:35:00 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_atol.c ft_split.c ft_isdigit.c ft_putstr_fd.c ft_putchar_fd.c ft_memmove.c\
				ft_calloc.c ft_strlcpy.c ft_strlen.c ft_bzero.c ft_strcmp.c ft_lstclear.c\

BONUS		=	ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\

OBJS		=	${SRCS:%.c=%.o}

OBJSBONUS	=	${BONUS:%.c=%.o}

CC			=	cc

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror

RED			=	\033[1;31m
GREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
BLUE		=	\033[1;34m
RESET		=	\033[0m

all:		${NAME}
				@echo "$(RED)------------done------------$(RESET)"

${NAME}: ${OBJS}
				@ar rcs ${NAME} ${OBJS}

%.o:%.c libft.h
				@echo "Compiling$(YELLOW)" $< "$(RESET)"
				@${CC} ${CFLAGS} -c $< -o $@
				@echo "Added new file$(BLUE)" $@ "$(RESET)"

bonus:		${OBJS} ${OBJSBONUS}
				@ar rcs ${NAME} ${OBJS} ${OBJSBONUS}
				@echo "$(RED)------------done------------$(RESET)"

clean:
				@echo "$(GREEN)Cleaned$(RESET)"
				@${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
				@${RM} ${NAME}

re:			fclean all
