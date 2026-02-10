/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:45:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/02/10 10:43:36 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ac_two(char **av, char ***split, int **tab, t_stack **stack_a)
{
	*split = ft_split(av[1], ' ');
	if (!*split || !(*split)[0])
	{
		free_split(*split);
		return (0);
	}
	if (ft_errors(*split))
	{
		ft_printf("Error\n");
		free_split(*split);
		return (1);
	}
	*tab = create_tab(strlen_split(*split), *split);
	if (!*tab)
	{
		free_split(*split);
		return (1);
	}
	*stack_a = create_stack(NULL, *tab, strlen_split(*split));
	free(*tab);
	free_split(*split);
	return (0);
}

int	main(int ac, char **av)
{
	int		*tab;
	char	**split;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2 && ac_two(av, &split, &tab, &stack_a))
		return (1);
	else
	{
		if (ft_errors(av + 1))
			return (ft_printf("Error"), 1);
		tab = create_tab(ac - 1, av + 1);
		if (!tab)
			return (1);
		stack_a = create_stack(NULL, tab, (ac - 1));
		free(tab);
	}
	if (!stack_a)
		return (1);
	second_part(&stack_a, &stack_b);
	return (0);
}

int	second_part(t_stack	**stack_a, t_stack **stack_b)
{
	int	len;

	len = stack_len(*stack_a);
	if (is_sorted(*stack_a) || len <= 1)
		return (free_stack(*stack_a), 0);
	if (len == 1)
	{
		free_stack(*stack_a);
		return (0);
	}
	else if (len == 2)
		sort_two(stack_a);
	else if (len == 3)
		sort_just_three(stack_a);
	else if (len == 5)
	{
		sort_five(stack_a, stack_b);
		return (free_stack(*stack_a), free_stack(*stack_b), 0);
	}
	else if (len > 3)
		sort_all(stack_a, stack_b);
	free_stack(*stack_a);
	if (*stack_b)
		free_stack(*stack_b);
	return (0);
}
