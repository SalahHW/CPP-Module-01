# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 09:27:41 by sbouheni          #+#    #+#              #
#    Updated: 2023/11/25 13:18:47 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	loser

CXX					=	g++
CXXFLAGS			=	-Wall -Wextra -Werror -std=c++98 -g

SRCS				=	source/main.cpp										\

OBJS				=	$(SRCS:.cpp=.o)

all:					$(NAME)

$(NAME)				:	$(OBJS)
						$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean				:
						rm -rf $(OBJS)

fclean				:	clean
						rm -rf $(NAME)

re					:	fclean all

.PHONY				:	all clean fclean re
					
