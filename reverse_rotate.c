/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 22:36:35 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/03 11:47:38 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*reverse_rotate(t_stack *stack)
{
	t_stack	*node_first;
	t_stack	*node_before_last;
	t_stack	*node_last;

	node_first = stack;
	while (stack->next->next)
		stack = stack->next;
	node_last = stack->next;
	node_before_last = stack;
	node_last->next = node_first;
	node_before_last->next = NULL;
	return (node_last);
}

void	reverse_rotate_a(t_stack **stack_a)
{
	*stack_a = reverse_rotate(*stack_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack **stack_b)
{
	*stack_b = reverse_rotate(*stack_b);
	ft_printf("rrb\n");
}

void	reverse_rotate_r(t_stack **stack_a, t_stack **stack_b)
{
	*stack_a = reverse_rotate(*stack_a);
	*stack_b = reverse_rotate(*stack_b);
	ft_printf("rrr\n");
}