/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 22:34:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/03 11:48:02 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
	return (stack);
}

void	swap_a(t_stack **stack_a)
{
	*stack_a = swap(*stack_a);
	ft_printf("sa\n");
}

void	swap_b(t_stack **stack_b)
{
	*stack_b = swap(*stack_b);
	ft_printf("sb\n");
}

void	swap_r(t_stack **stack_a, t_stack **stack_b)
{
	*stack_a = swap(*stack_a);
	*stack_b = swap(*stack_b);
	ft_printf("ss\n");
}