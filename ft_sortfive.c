/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortfive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:29:24 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/20 16:23:35 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_sorthfive(t_stack stack)
{
    int i;
	int small;
    
    i = 0;
	while(i < 2)
	{
    	small = ft_smallest(stack);
		if (small < stack.bot_a / 2)
		{
			while(small--)
				stack = ft_rotate_ra(stack);
			stack = ft_push_pb(stack);
		}
		else
		{
			while(small++ <= stack.bot_a)
				stack = ft_reverse_ra(stack);
			stack = ft_push_pb(stack);
		}
		i++;
	}
	stack = ft_sortthree(stack);
	stack = ft_push_pa(stack);
	stack = ft_push_pa(stack);
	return (stack);
}