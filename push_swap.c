/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:45:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/02/18 01:30:02 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2)
		stack_a = ac_2(av[1]);
	else
		stack_a = ac_3(ac, av);
	if (!stack_a)
		return (1);
	second_part(&stack_a, &stack_b);
	return (0);
}

int	second_part(t_stack **stack_a, t_stack **stack_b)
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

int	count_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return (0);
	while (split[i])
		i++;
	return (i);
}

t_stack	*ac_2(char *av)
{
	char	**split;
	int		*tab;
	t_stack	*stack;

	stack = NULL;
	split = ft_split(av, ' ');
	if (!split || ft_errors(split))
		return (free_split(split), ft_printf("Error\n"), NULL);
	tab = create_tab(count_split(split), split);
	if (!tab)
		return (free_split(split), NULL);
	stack = create_stack(NULL, tab, count_split(split));
	free(tab);
	free_split(split);
	return (stack);
}

t_stack	*ac_3(int ac, char **av)
{
	int		*tab;
	t_stack	*stack;

	stack = NULL;
	if (ft_errors(av + 1))
		return (ft_printf("Error\n"), NULL);
	tab = create_tab(ac - 1, av + 1);
	if (!tab)
		return (NULL);
	stack = create_stack(NULL, tab, ac - 1);
	free(tab);
	return (stack);
}
