/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:50:26 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/12 03:40:22 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

t_stack ft_sort_table(t_stack stack)
{
    int i;
    int j;

    i = 0;
    while (i < stack.bot_a)
    {
        j = 0;
        while(j < stack.bot_a)
        {
            if (stack.stack_tmp[j] > stack.stack_tmp[j + 1])
                swap(&stack.stack_tmp[j], &stack.stack_tmp[j + 1]);
            j++;
        }
        i++;
    }
    return(stack);
}