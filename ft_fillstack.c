/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:58:46 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/14 01:01:02 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_fillstack(int ac, char **av, t_stack stack)
{
	int 	i;
	int		j;
	
	stack.stack_a = malloc(sizeof(int) * (ac - 1));
	// if (!stack.stack_a)
	// 	exit(0);
	i = 1;
	j = -1;
	while(i < ac)
	{
		j++;
		if (j == 0)
			stack.top_a++;
		stack.stack_a[j] = ft_atoi(av[i]);  
		i++;
	}
	stack.bot_a = j;
	return(stack);
}