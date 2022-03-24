/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:35:08 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/24 00:40:41 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small(t_stack stack)
{
    if (stack.bot_a == 4)
        stack = ft_sorthfive(stack);
    else if (stack.bot_a == 2)
        stack = ft_sortthree(stack);
}

void	ft_sort_big(t_stack stack)
{
    if (stack.bot_a <= 100)
    {
        while(stack.bot_a)
        {
            stack = ft_sort_table(ft_tmpstack(stack));
            stack = ft_sorthundred(stack);
        }
        stack = ft_send_a(stack);
		free(stack.stack_tmp);
    }
    else if (stack.bot_a <= 500)
    {
        while(stack.bot_a)
        {
            stack = ft_sort_table(ft_tmpstack(stack));
            stack = ft_sorthundred(stack);
        }
        stack = ft_send_a(stack);
		free(stack.stack_tmp);
    }
}