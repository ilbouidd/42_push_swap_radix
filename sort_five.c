/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 23:43:34 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/31 23:48:56 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	t_stack	*tmp;

	while (stack_len(*stack_a) > 3)
	{
		tmp = *stack_a;
		min = tmp->value;
		while (tmp)
		{
			if (tmp->value < min)
				min = tmp->value;
			tmp = tmp->next;
		}
		while ((*stack_a)->value != min)
			rotate_a(stack_a);
		push_b(stack_a, stack_b);
	}
	sort_just_three(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
}
