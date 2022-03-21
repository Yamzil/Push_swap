/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortfivehundred.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:47:14 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/21 17:57:10 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_sortfivehundred(t_stack stack)
{
    int i;
    int chunk;
    int div;

    chunk = stack.bot_a / 5;
    div = chunk / 2;
    i = 0;
    while(i <= stack.bot_a)
    {
        if (stack.stack_a[i] <= stack.stack_tmp[chunk])
        {
			while(i--)
				stack = ft_rotate_ra(stack, 1);
			if ((stack.stack_a[0] <= stack.stack_tmp[chunk]))
				stack = ft_push_pb(stack);
			if (stack.stack_a[0] > stack.stack_tmp[chunk] && stack.stack_b[stack.top_b] < stack.stack_tmp[div])
				stack = ft_ra_rb(stack);
			else if (stack.stack_b[stack.top_b] < stack.stack_tmp[div])
				stack = ft_rotate_rb(stack , 1);
		}
        i++;
    }
    return(stack);
}