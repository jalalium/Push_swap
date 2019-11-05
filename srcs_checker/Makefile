# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/15 22:30:43 by mmaaouni          #+#    #+#              #
#    Updated: 2019/05/20 17:11:43 by mmaaouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES2 = checker.c does_sort.c get_check_input.c
OBJECTS2 = $(FILES2:.c=.o)

all: $(OBJECTS2)

$(OBJECTS2): %.o : %.c
		gcc -Wall -Wextra -Werror -I ../includes/pushswap.h -c $< -o $@
clean:
	rm -f $(OBJECTS2)
fclean: clean
re: fclean $(OBJECTS2)
