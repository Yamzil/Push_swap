/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:17:48 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/20 16:21:13 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smallest(t_stack stack)
{
	int	i;
	int smallest;

	i = 0;
	smallest = i;
	
	while(i < stack.bot_a)
	{
		if (stack.stack_a[i] < stack.stack_a[smallest])
			smallest = i;
		i++;
	}
	return(smallest);
}