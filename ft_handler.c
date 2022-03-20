/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:22:57 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/20 01:33:52 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkarguments(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		// if (ft_atoi(&str[i]) > 2147483647 || ft_atoi(&str[i]) < -2147483648)
		// {
		// 	write(2,"Error", 7);
		// 	return (0);
		// }
		if (ft_isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_checkduplicate(t_stack stack)
{	
	int	i;
	int	j;
	int	size;

	i = 0;
	size = stack.bot_a + 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack.stack_a[j] == stack.stack_a[i])
			{
				write(2, "Dupliacte Error \n", 18);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}