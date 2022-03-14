/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:17:10 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/14 01:42:55 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_send_a(t_stack stack)
{
    int bestmv_rb = 0;
    int bestmv_rrb = 0;
    int biggest = 0;

    while (stack.bot_b != stack.top_b)
    {
        biggest = ft_biggest(stack);
        bestmv_rb = biggest - stack.top_b;
        bestmv_rrb = stack.bot_b - biggest;
        if (bestmv_rb > bestmv_rrb)
        {
            while(bestmv_rrb--)
                stack = ft_reverse_rb(stack);
            stack = ft_push_pa(stack);
        }
        else
        {
            while(bestmv_rb--)
                stack = ft_rotate_rb(stack);
            stack = ft_push_pa(stack);
        }
    }
    return(stack);
}