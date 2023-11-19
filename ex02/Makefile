# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 12:28:35 by sbouheni          #+#    #+#              #
#    Updated: 2023/11/19 12:31:14 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= brain

CXX					= g++
CXXFLAGS			= -Wall -Wextra -Werror -std=c++98 -g

SRCS				= main.cpp

OBJS				= $(SRCS:.cpp=.o)

all:				$(NAME)

$(NAME):			$(OBJS)
					$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
					rm -rf $(OBJS)

fclean:				clean
					rm -rf $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
