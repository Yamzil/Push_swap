/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:58:46 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/24 01:49:26 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_fillstack(int ac, char **av, t_stack stack)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	stack.stack_a = malloc(sizeof(int) * ac);
	stack.top_a++;
	while (av[i])
	{
		// if (j == 0)
		stack.stack_a[i] = ft_atoi(av[i]);
		j++;
		++i;
	}
	stack.bot_a = j;
	return (stack);
}
