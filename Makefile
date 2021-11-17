# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 13:48:58 by ykassim-          #+#    #+#              #
#    Updated: 2021/11/17 13:08:48 by ykassim-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT		= client

SERVER		= server

SRC_CLIENT	= client.c

SRC_SERVER	= server.c

OBJ_SERVER	= $(SRC_SERVER:.c=.o)

OBJ_CLIENT	= $(SRC_CLIENT:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:		$(CLIENT) $(SERVER)

$(SERVER):	$(OBJ_SERVER)
		$(CC) $(CFLAGS) -o $(SERVER) $(OBJ_SERVER)

$(CLIENT):	$(OBJ_CLIENT)
		$(CC) $(CFLAGS) -o $(CLIENT) $(OBJ_CLIENT)

clean:
		$(RM) $(OBJ_SERVER) $(OBJ_CLIENT)

fclean:		clean
		$(RM) $(SERVER) $(CLIENT)

re:		fclean all
