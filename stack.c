/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 01:38:11 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/02/09 14:00:24 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_tab(int ac, char **av)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * ac);
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
	return (tab);
}

t_stack	*ft_addfront_stack(t_stack *stack, int n)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = n;
	new->next = stack;
	return (new);
}

t_stack	*create_stack(t_stack *stack, int *tab, int ac)
{
	while (ac > 0)
	{
		stack = ft_addfront_stack(stack, tab[ac - 1]);
		if (!stack)
		{
			free_stack(stack);
			return (NULL);
		}
		ac--;
	}
	return (stack);
}

//void	print_value(t_stack *stack)
//{
//	t_stack	*tmp;
//
//	tmp = stack;
//	while (tmp)
// 	{
// 		ft_printf("%d ", tmp->value);
// 		tmp = tmp->next;
//	}
//	ft_printf("     values lines");
//}
