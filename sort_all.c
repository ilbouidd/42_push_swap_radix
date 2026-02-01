/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trit_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:47:29 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/08 18:26:08 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
int get_max_bits(t_stack *stack_a)
{
    int max;
    int bits;

    if (!stack_a)
        return (0);
    max = stack_a->index;
    while (stack_a)
    {
        if (stack_a->index > max)
            max = stack_a->index;
        stack_a = stack_a->next;
    }
    bits = 0;
    while ((max >> bits) != 0)
        bits++;
    return (bits);
}

void radix_sort(t_stack **stack_a, t_stack **stack_b)
{
    int i;
    int j;
    int size;
    int max_bits;

    if (!stack_a || !*stack_a)
        return ;
    size = stack_len(*stack_a);
    max_bits = get_max_bits(*stack_a);
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            if (((*stack_a)->index >> i) & 1)
                rotate_a(stack_a);
            else
                push_b(stack_a, stack_b);
            j++;
        }
        while (*stack_b)
            push_a(stack_a, stack_b);
        i++;
    }
}

void sort_all(t_stack **stack_a, t_stack **stack_b)
{
    index_stack(*stack_a);
    radix_sort(stack_a, stack_b);
}

