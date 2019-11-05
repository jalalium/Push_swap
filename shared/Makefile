# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/15 22:30:43 by mmaaouni          #+#    #+#              #
#    Updated: 2019/05/20 21:24:08 by mmaaouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES1 = instructions.c operations.c check_error_data.c\
		ft_strparse.c ft_parse_sub.c joining_routines.c ft_int_atoi.c\
		generate_pile.c routines.c
OBJECTS1 = $(FILES1:.c=.o)
all: $(OBJECTS1)

$(OBJECTS1): %.o : %.c
		gcc -Wall -Wextra -Werror -I ../includes/pushswap.h -c $< -o $@	
clean:
		rm -rf $(OBJECTS1)
fclean: clean
re: fclean $(OBJECTS1)
