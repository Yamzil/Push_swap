/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:58:46 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/09 21:20:48 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_fillstack(int ac, char **av, t_stack stack)
{
	int 	i;
	int		j;
	
	stack.stack_a = malloc(sizeof(int) * (ac - 1));
	// if (!stack.stack_a)
	// 	return ;
	i = 1;
	j = 0;
	while(i < ac)
	{
		stack.stack_a[j++] = ft_atoi(av[i]);  
		i++;
	}
	stack.bot_a = j;
	return(stack);
}