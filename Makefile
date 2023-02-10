# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 13:52:24 by tstrassb          #+#    #+#              #
#    Updated: 2023/02/09 14:34:34 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

SRCS	=	src/main.c\
			src/add_index.c\
			src/oppapb.c\
			src/oprarbrr.c\
			src/oprrarrb.c\
			src/opsasbss.c\
			src/sort_quick.c\
			src/sorting_assigner.c\
			src/sorting_utils.c\
			src/main_utils.c\
			libft/libft.a\

$(NAME) :
			make -C libft
			make bonus -C libft
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all		:	$(NAME)

fclean	:	clean
			$(RM) $(NAME)
			@make fclean -C libft

clean	:
			$(RM) $(NAME)
			@make clean -C libft

re		:	fclean all
