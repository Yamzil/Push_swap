/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortfivehundred.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:47:14 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/14 02:15:24 by yamzil           ###   ########.fr       */
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
    
            if (i <= (stack.bot_a / 2))
            {
                while(i--)
                    stack = ft_rotate_ra(stack);
                if (stack.stack_a[0] >= stack.stack_tmp[div] || stack.top_b == stack.bot_b)
                    stack = ft_push_pb(stack);
                else 
                {
                    stack = ft_push_pb(stack);
                    stack = ft_rotate_rb(stack);
                }
            }      
            else
            {
                while(i++ <= stack.bot_a)
                    stack = ft_reverse_ra(stack);
                if (stack.stack_a[0] >= stack.stack_tmp[div] || stack.top_b == stack.bot_b)
                    stack = ft_push_pb(stack);
                else
                {
                    stack = ft_push_pb(stack);
                    stack = ft_rotate_rb(stack);
                }
            }
            i = -1;
        }
        i++;
    }
    return(stack);
}