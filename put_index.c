/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:41:15 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/02/01 02:30:16 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    index_stack(t_stack *a)
{
    t_stack    *tmp;
    t_stack    *cmp;
    int        index;

    tmp = a;
    while (tmp)
    {
        index = 0;
        cmp = a;
        while (cmp)
        {
            if (cmp->value < tmp->value)
                index++;
            cmp = cmp->next;
        }
        tmp->index = index;
        tmp = tmp->next;
    }
}

// void	print_index(t_stack *stack)
// {
// 	t_stack	*tmp;

// 	tmp = stack;
// 	while (tmp)
// 	{
// 		ft_printf("%d ", tmp->index);
// 		tmp = tmp->next;
// 	}
// 	ft_printf("     index lines");
// }