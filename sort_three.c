/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trit_three.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:35:31 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/08 18:27:26 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_just_three_second(t_stack **stack_a, int first, int second,
		int third)
{
	if (first < second && second < third)
		return ;
	else if (first > second && second < third && first < third)
		swap_a(stack_a);
	else if (first > second && second > third)
	{
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (first > second && second < third && first > third)
		rotate_a(stack_a);
	else if (first < second && second > third && first < third)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	else if (first < second && second > third && first > third)
		reverse_rotate_a(stack_a);
}

void	sort_just_three(t_stack **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->value;
	second = (*stack_a)->next->value;
	third = (*stack_a)->next->next->value;
	sort_just_three_second(stack_a, first, second, third);
}
