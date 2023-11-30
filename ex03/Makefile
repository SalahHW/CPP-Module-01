# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 12:16:15 by sbouheni          #+#    #+#              #
#    Updated: 2023/11/30 11:16:48 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	violence

CXX					=	c++
CXXFLAGS			= 	-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS				=	source/main.cpp										\
					  	source/Weapon.cpp									\
					  	source/HumanA.cpp									\
					  	source/HumanB.cpp									\

HDRS				=	include/Weapon.hpp									\
					  	include/HumanA.hpp									\
					  	include/HumanB.hpp									\

OBJS				=	$(SRCS:.cpp=.o)

all					:	$(NAME)

$(NAME)				:	$(OBJS) $(HDRS)
						$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean				:
						rm -f $(OBJS)

fclean				:	clean
						rm -f $(NAME)

re					:	fclean all

.PHONY				:	all clean fclean re
