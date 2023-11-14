# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlakshma <jlakshma@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 14:46:29 by jlakshma          #+#    #+#              #
#    Updated: 2023/10/30 14:46:29 by jlakshma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
RM		= /bin/rm -f

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

LIB1	= ar -rcs
LIB2	= ranlib

SRCS_MAND	=	$(wildcard *.c)

OBJS_MAND	=	${SRCS_MAND:.c=.o}


$(NAME)	:	$(OBJS_MAND)
			$(LIB1) $(NAME) $(OBJS_MAND)
			$(LIB2) $(NAME)

all		:	$(NAME)

%.o		:	%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean	:	
			$(RM) $(OBJS_MAND) $(OBJS_BONUS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

PHONY	:	all clean fclean re
