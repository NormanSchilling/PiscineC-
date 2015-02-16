# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/18 19:25:14 by nschilli          #+#    #+#              #
#    Updated: 2015/01/18 19:28:18 by nschilli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

CFLAGS = -Wall -Werror -Wextra -lncurses -ansi

NAME = monitor

SRCS =	main.cpp \
		ShellDisplay.cpp \
		ModuleCPUInfo.cpp \
		ModuleRamInfo.cpp \
		ModuleNetInfo.cpp \
		ModuleSystemInfo.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = ./

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -lncurses

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDES)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re