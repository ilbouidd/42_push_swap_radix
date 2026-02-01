/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:50:17 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/01/13 02:04:27 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_double(char **av, int i, long nb)
{
	i++;
	while (av[i])
	{
		if (nb == ft_atol(av[i]))
			return (1);
		i++;
	}
	return (0);
}

int	no_cara(char *av)
{
	int	i;

	i = 0;
	if (!av || av[0] == '\0')
		return (1);
	if (av[i] == '+' || av[i] == '-')
	{
		if (!av[i + 1])
			return (1);
		i++;
	}
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_errors(char **av)
{
	int		i;
	long	nb;

	i = 0;
	while (av[i])
	{
		if (no_cara(av[i]))
			return (1);
		nb = ft_atol(av[i]);
		if (nb > 2147483647 || nb < -2147483648)
			return (1);
		if (is_double(av, i, nb))
			return (1);
		i++;
	}
	return (0);
}
