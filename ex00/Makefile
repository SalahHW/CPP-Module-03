# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 10:54:16 by sbouheni          #+#    #+#              #
#    Updated: 2023/12/02 11:00:48 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	claptrap

CXX						=	c++
CXXFLAGS				=	-Wall -Wextra -Werror -g -fsanitize=address

SRCS					=	source/main.cpp									\
							source/ClapTrap.cpp								\

HDRS					=	include/ClapTrap.hpp							\

OBJS					=	$(SRCS:.cpp=.o)

all						:	$(NAME)

$(NAME)					:	$(OBJS) $(HDRS)
							$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean					:
							rm -f $(OBJS)

fclean					:	clean
							rm -f $(NAME)

re						:	fclean all

.PHONY					:	all clean fclean re
