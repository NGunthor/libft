# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 13:50:07 by ngunthor          #+#    #+#              #
#    Updated: 2018/11/23 18:07:30 by ngunthor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = includes/*.h

FLAGS = -Wall -Wextra -Werror

SRCS = srcs/*.c

OBJ = *.o

all:
	gcc  $(SRCS) $(INCLUDES) main.c

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf a.out

re: fclean all
