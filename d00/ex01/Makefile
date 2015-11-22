#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 16:30:36 by aollivie          #+#    #+#              #
#    Updated: 2015/11/03 23:32:07 by aollivie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

EXEC=phonebook
CXX=clang++
CXXFLAG= -Wall -Werror -Wextra
SRC= Contact.class.cpp main.cpp
OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CXX) -o $@ $^

%.o: %.cpp
		$(CXX) $(CXXFLAG) -o $@ -c $<

.PHONY: clean fclean

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(EXEC)
