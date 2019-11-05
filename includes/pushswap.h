/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 23:06:26 by mmaaouni          #+#    #+#             */
/*   Updated: 2019/05/20 16:51:43 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include "../libft/includes/libft.h"

typedef	struct		s_pile
{
	int				val;
	int				act_p;
	int				sup_p;
	int				push;
	struct s_pile	*next;
}					t_pile;

typedef	struct		s_tuple
{
	int				min;
	int				max;
	int				push;
}					t_tuple;
char				**ft_strparse(char *str, char c);
int					ft_check_word(char *str, int *check);
int					ft_int_atoi(const char *str, int *check, long long out,
	int sign);
int					ft_ptrchr(char *str, char c);
int					front_sp(char *str, char c);
int					back_sp(char *str, char c, int len);
void				ft_ra(t_pile **a);
void				ft_sa(t_pile **a);
void				ft_pb(t_pile **a, t_pile **b);
void				ft_rra(t_pile **a);
t_pile				*last(t_pile *a);
t_pile				*bef_last(t_pile *a);
int					length(t_pile *a);
int					find_minofpush(t_pile *a, int max);
int					find_maxofpush(t_pile *a, int max);
t_pile				*get_data(int argc, char **argv, int *check);
int					error_check(int check);
char				*ft_instr_join(char *str, char *ptr);
char				*join_input(char *str, char *ptr);
char				*concat(int argc, char **argv, char *tmp);
t_pile				*generate_pile(char **tmp, int *check, int i);
int					length(t_pile *a);
int					count_push(t_pile *a, int n);
void				populate(int *tab, t_pile *a);
void				ft_swap(int *a, int *b);
void				sort(int *tab, int n);
int					doublons(int *tab, int n);
int					find_in_tab(int *tab, int x, int n);
void				fill_sup(int *tab, t_pile *a, int len);
void				alread_sorted(t_pile *a, int *check);
void				fill_order(t_pile *a, int *check);
t_pile				*get_data(int argc, char **argv, int *check);
int					error_check(int check);
char				*sort_acb(t_pile **a, char *str);
char				*sort_bca(t_pile **a, char *str);
char				*sort_cab(t_pile **a, char *str);
char				*sort_three(t_pile **a, char *str);
char				*sort_threedown(t_pile **a, char *str);
void				assign_values(int *x, int *y, int *z, t_pile *a);
void				make_push_zero(t_pile **a);
void				minim(int *a, int *b, int *c);
int					mining(t_pile *a);
int					maxing(t_pile *a);
char				*pushit(t_pile **a, t_pile **b, t_tuple lims, char *str);
char				*subdivide(t_pile **a, t_pile **b, char *str);
char				*sort_three(t_pile **a, char *str);
char				*merge(t_pile **a, t_pile **b, char *str);
char				*merge_in_a(t_pile **a, t_pile **b, char *str, int max);
char				*merge_three_up(t_pile **a, t_pile **b, char *str, int max);
char				*free_a_bottom(t_pile **a, t_pile **b, char *str, int max);
char				*free_a_top(t_pile **a, t_pile **b, char *str, int max);
char				*merge_three_down(t_pile **a, char *str, int max);
char				*merge_in_b(t_pile **a, t_pile **b, char *str, int max);
char				*rewindd(t_pile **a, char *str, int max);
char				*skip_element_ra(t_pile **a, char *str);
char				*skip_element_rra(t_pile **a, char *str);
char				*push_and_down(t_pile **a, t_pile **b, char *str);
char				*just_push(t_pile **a, t_pile **b, char *str);
char				*free_b_top(t_pile **a, t_pile **b, char *str, int max);
char				*free_b_bottom(t_pile **a, t_pile **b, char *str, int max);
char				*merge_six_up(t_pile **a, t_pile **b, char *str, int max);
char				*merge_six_down(t_pile **a, t_pile **b, char *str, int max);
char				*push_six_bottom(t_pile **a, t_pile **b, char *str, int
	max);
char				*push_six_top(t_pile **a, t_pile **b, char *str, int max);
char				*push_all_b(t_pile **a, t_pile **b, char *str);
int					maximum_push(t_pile *a);
char				*skip_element_rb(t_pile **b, char *str);
char				*skip_element_rrb(t_pile **b, char *str);
char				*push_and_down_b(t_pile **a, t_pile **b, char *str);
char				*just_push_b(t_pile **a, t_pile **b, char *str);
char				*optimized(t_pile **a, t_pile **b, char *str, int pat);
char				*pat_one(t_pile **a, t_pile **b, char *str);
char				*pat_two(t_pile **a, t_pile **b, char *str);
char				*pat_three(t_pile **a, t_pile **b, char *str);
char				*pat_four(t_pile **a, char *str);
char				*pat_five(t_pile **a, t_pile **b, char *str);
char				*pat_six(t_pile **a, t_pile **b, char *str);
char				*pat_seven(t_pile **a, t_pile **b, char *str);
int					pattern_matching(int *tab);
int					spec_case(t_pile *a);
char				*optimized(t_pile **a, t_pile **b, char *str, int pat);
char				*get_input(void);
int					invalid_instr(char *str);
int					does_sort(t_pile **a, t_pile **b, char *str);
int					is_a_sorted(t_pile *a);
char				*three_only_acb(t_pile **a, char *str);
char				*three_only_bac(t_pile **a, char *str);
char				*three_only_bca(t_pile **a, char *str);
char				*three_only_cab(t_pile **a, char *str);
char				*three_only_cba(t_pile **a, char *str);
char				*three_only(t_pile **a, char *str);
char				*pat_eight(t_pile **a, t_pile **b, char *str);
#endif
