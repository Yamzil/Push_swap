/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_biggest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:14:39 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/14 01:40:55 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_biggest(t_stack stack)
{
    int i;
    int biggest;

    i = stack.top_b;
    biggest = i;
    while(i < stack.bot_b)
    {
            if (stack.stack_b[i] > stack.stack_b[biggest])
                biggest = i;
            i++;
        }
    return(biggest);
}