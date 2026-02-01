/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:44:50 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/02/01 00:30:08 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

int					is_double(char **av, int i, long nb);
int					ft_errors(char **av);
int					*create_tab(int ac, char **av);
t_stack				*ft_addfront_stack(t_stack *stack, int n);
t_stack				*create_stack(t_stack *stack, int *tab, int ac);
t_stack				*rotate(t_stack *stack);
void				rotate_a(t_stack **stack_a);
void				rotate_b(t_stack **stack_b);
void				rotate_r(t_stack **stack_a, t_stack **stack_b);
t_stack				*reverse_rotate(t_stack *stack);
void				reverse_rotate_a(t_stack **stack_a);
void				reverse_rotate_b(t_stack **stack_b);
void				reverse_rotate_r(t_stack **stack_a, t_stack **stack_b);
t_stack				*swap(t_stack *stack);
void				swap_a(t_stack **stack_a);
void				swap_b(t_stack **stack_b);
void				swap_r(t_stack **stack_a, t_stack **stack_b);
void				push(t_stack **stack_src, t_stack **stack_dst);
void				push_a(t_stack **stack_a, t_stack **stack_b);
void				push_b(t_stack **stack_a, t_stack **stack_b);
int					stack_len(t_stack *stack);
void				sort_all(t_stack **stack_a, t_stack **stack_b);
int	second_part(t_stack	**stack_a, t_stack **stack_b);
void				sort_two(t_stack **stack_a);
void				sort_just_three(t_stack **stack_a);
void				sort_just_three_second(t_stack **stack_b, int first,
						int second, int third);
void				free_stack(t_stack *stack);
long				strlen_split(char **str);
void				free_split(char **split);
int					is_sorted(t_stack *stack);
void sort_all(t_stack **stack_a, t_stack **stack_b);
void radix_sort(t_stack **stack_a, t_stack **stack_b);
int get_max_bits(t_stack *stack_a);
void    index_stack(t_stack *a);
void	sort_five(t_stack **a, t_stack **b);
// void	print_value(t_stack *stack);
void	print_index(t_stack *stack);


#endif