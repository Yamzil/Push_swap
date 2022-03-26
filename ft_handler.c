/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:22:57 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 03:30:10 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkarguments(char **av, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] == '-' || av[i][j] == '+') && j == 0)
				j++;
			if (!ft_isdigit(av[i][j]))
			{
				write(1, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_checkduplicate(t_stack s, int len)
{	
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (s.s_a[j] == s.s_a[i])
			{
				write(2, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_checkint(int len, char **av)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}
