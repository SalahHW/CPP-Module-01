# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 14:06:44 by sbouheni          #+#    #+#              #
#    Updated: 2023/11/30 11:16:48 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	complaints

CXX					=	c++
CXXFLAGS			=	-Wall -Wextra -Werror -std=c++98 -g

SRCS				=	source/main.cpp										\
						source/Harl.cpp										\

HDRS				=	include/Harl.hpp									\

OBJS				=	$(SRCS:.cpp=.o)

all					:	$(NAME)

$(NAME)				:	$(OBJS)
						$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean				:
						rm -f $(OBJS)

fclean				:	clean
						rm -f $(NAME)

re					:	fclean all

.PHONY				:	all clean fclean re
