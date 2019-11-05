# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/15 22:30:43 by mmaaouni          #+#    #+#              #
#    Updated: 2019/05/20 21:29:55 by mmaaouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES1 = main_push_swap.c merge.c merge_in_a.c\
		merge_in_b.c patterns.c patterns_two.c sort_three_down.c\
		optimization_five.c subdivide.c pushing_b.c merge_in_a_routines.c\
		merge_in_b_routines.c subroutines.c three_only.c three_only_subs.c
OBJECTS1 = $(FILES1:.c=.o)

all: $(OBJECTS1)

$(OBJECTS1): %.o : %.c
		gcc -Wall -Wextra -Werror -I ../includes/pushswap.h -c $< -o $@	
clean:
		rm -f $(OBJECTS1)
fclean: clean
re: fclean $(OBJECTS1)
