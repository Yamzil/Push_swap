/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmpstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:38:16 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/12 07:49:41 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_tmpstack(t_stack stack)
{
    int     i;
    
    stack.stack_tmp = malloc((stack.bot_a * sizeof(int)) + 1);
    i = 0;
    while (i < stack.bot_a)
    {
        stack.stack_tmp[i] =  stack.stack_a[i];
        i++;
    }
    return(stack);
}