/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:58:46 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/21 22:15:05 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_fillstack(int ac, char **av, t_stack stack)
{
	int		i;
	int		j;
	long	tmp;

	i = 1;
	j = -1;
	while (i < ac)
	{
		j++;
		if (j == 0)
			stack.top_a++;
		tmp = ft_atoi(av[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			write(2, "Error\n", 6);
		stack.stack_a[j] = (int)tmp;
		i++;
	}
	stack.bot_a = j;
	return (stack);
}
