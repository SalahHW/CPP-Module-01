# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 15:01:06 by sbouheni          #+#    #+#              #
#    Updated: 2023/11/30 11:16:48 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	zombie

CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98 -g

SRCS			=	source/main.cpp											\
					source/newZombie.cpp									\
					source/randomChump.cpp									\
					source/Zombie.cpp										\

HDRS			=	include/Zombie.hpp										\

OBJS			=	$(SRCS:.cpp=.o)

all				:	$(NAME)

$(NAME)			:	$(OBJS) $(HDRS)
					$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean			:
					rm -rf $(OBJS)

fclean			:	clean
					rm -rf $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re
