# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 12:19:38 by nschilli          #+#    #+#              #
#    Updated: 2015/01/05 12:44:43 by nschilli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=g++
CFLAGS=-Wall -Wextra -Werror
EXEC=megaphone

all: $(EXEC)

$(EXEC): 
	g++ -o $@ $(CFLAGS) megaphone.cpp 

clean:
	rm -rf *o

fclean: clean
	rm -rf $(EXEC)

re: fclean
	g++ -o $(EXEC) $(CFLAGS) megaphone.cpp	