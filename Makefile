# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 13:48:58 by ykassim-          #+#    #+#              #
#    Updated: 2021/09/18 16:24:52 by ykassim-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

SRC =  server.c \
	  client.c \

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $@ $^

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
