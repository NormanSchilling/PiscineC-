# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 12:39:52 by nschilli          #+#    #+#              #
#    Updated: 2015/01/05 16:12:16 by nschilli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = contact.class.cpp main.cpp

OBJECTS = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	g++ $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp
	g++ $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all