# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/15 22:30:43 by mmaaouni          #+#    #+#              #
#    Updated: 2019/05/20 21:27:20 by mmaaouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap
NAME2 = checker
FILES1 = srcs/main_push_swap.c srcs/merge.c srcs/merge_in_a.c\
		srcs/merge_in_b.c srcs/patterns.c srcs/patterns_two.c srcs/sort_three_down.c\
		srcs/optimization_five.c srcs/subdivide.c srcs/pushing_b.c srcs/merge_in_a_routines.c \
		srcs/merge_in_b_routines.c srcs/subroutines.c srcs/three_only.c srcs/three_only_subs.c
OBJECTS1 = $(FILES1:.c=.o)
FILES2 = srcs_checker/checker.c srcs_checker/does_sort.c \
		srcs_checker/get_check_input.c
OBJECTS2 = $(FILES2:.c=.o)
FILES3   = shared/generate_pile.c shared/check_error_data.c\
		shared/operations.c shared/instructions.c shared/ft_strparse.c shared/ft_parse_sub.c \
		shared/ft_int_atoi.c shared/joining_routines.c shared/routines.c
OBJECTS3 = $(FILES3:.c=.o)
LIB = libft/libft.a
DIR = libft
DIR1 = srcs
DIR2 = srcs_checker
DIR3 = shared

all: $(NAME1) $(NAME2)

$(NAME1): $(LIB) $(OBJECTS1) $(OBJECTS3)
		gcc -Wall -Wextra -Werror -I ../includes/pushswap.h $(OBJECTS1) $(OBJECTS3) $(LIB) -o $(NAME1)
$(NAME2): $(LIB) $(OBJECTS2) $(OBJECTS3)
		gcc -Wall -Wextra -Werror -I ../includes/pushswap.h $(OBJECTS2) $(OBJECTS3) $(LIB) -o $(NAME2)
$(OBJECTS1): $(FILES1)
		make -C $(DIR1)
$(OBJECTS2): $(FILES2)
		make -C $(DIR2)
$(OBJECTS3): $(FILES3)
		make -C $(DIR3)
$(LIB):
		make -C $(DIR)
clean:
		make -C $(DIR) clean
		make -C $(DIR1) clean
		make -C $(DIR2) clean
		make -C $(DIR3) clean
fclean: clean
		rm -f $(NAME1)
		rm -f $(NAME2)
		make -C $(DIR) fclean
		make -C $(DIR1) fclean
		make -C $(DIR2) fclean
		make -C $(DIR3) clean
re: fclean $(NAME1) $(NAME2)
