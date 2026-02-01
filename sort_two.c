/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_two.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:43:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/08 18:27:35 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **stack_a)
{
	int first;
	int second;

	first = (*stack_a)->value;
	second = (*stack_a)->next->value;
	if (first > second)
		swap_a(stack_a);
}