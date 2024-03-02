# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 18:12:40 by pvaladar          #+#    #+#              #
#    Updated: 2023/11/28 14:25:35 by jlakshma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
RM		= /bin/rm -f

CC		= cc


LIB1	= ar -rcs
LIB2	= ranlib

SRCS = $(wildcard *.c)
	   
OBJS	=	${SRCS:.c=.o}

$(NAME)	:	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

all		:	$(NAME)

%.o		:	%.c
			$(CC) -c $< -o $@

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY: all clean fclean re
