/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:50:26 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/13 23:50:35 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stack ft_sort_table(t_stack stack)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < stack.bot_a)
    {
        j = 0;
        while(j < stack.bot_a)
        {
            if (stack.stack_tmp[j] > stack.stack_tmp[j + 1])
                {
                   tmp = stack.stack_tmp[j];
                   stack.stack_tmp[j] = stack.stack_tmp[j + 1];
                   stack.stack_tmp[j + 1] = tmp;
               }
            j++;
        }
        i++;
    }
    return(stack);
}