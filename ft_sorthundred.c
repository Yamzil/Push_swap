/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorthundred.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:25:31 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/14 00:36:40 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_sorthundred(t_stack stack)
{
    int i;
    int chunk;
    int div;

    chunk = stack.bot_a / 3;
    div = chunk / 2;
    i = 0;
    // printf("--------%d------",stack.stack_tmp[chunk]);
    // printf("--------%d------",stack.stack_tmp[div]);
    
    while(i <= stack.bot_a)
    {
        if (stack.stack_a[i] <= stack.stack_tmp[chunk])
        {
            printf("pivot = %d- num = %d---\n",stack.stack_tmp[chunk],stack.stack_a[i]);
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