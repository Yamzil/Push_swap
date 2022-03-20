/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:14:14 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/19 23:39:00 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_sorted(t_stack stack, int ac)
{
    int i;

    i = 1;
    while(i < ac - 1)
    {
        if (stack.stack_a[i] < stack.stack_a[i + 1])
            i++;
        else
            return(1);
    }
    return(0);
}
