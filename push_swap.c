/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:26:59 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/14 01:25:24 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac, char **av)
{
    t_stack stack;
    int     i;

    stack.stack_a = malloc(sizeof(int) * (ac - 1));
    stack.stack_b = malloc(sizeof(int) * (ac - 1));
    stack.top_a = -1;
    stack.top_b = ac - 1;
    stack.bot_a = -1;
    stack.bot_b = ac - 1;
    i = 1;
	stack = ft_fillstack(ac, av, stack);
    if (ft_checkduplicate(stack))
        return(0);
    while (i < ac)
    { 
        if (!ft_checkarguments(av[i]))
            write(2, "Arguments Error \n", 18);
        i++;
    }
    // ft_sortthree(stack);
    while(stack.bot_a)
    {
        if (ft_sorted(stack, ac))
            break;
        stack = ft_sort_table(ft_tmpstack(stack));
        stack = ft_sorthundred(stack);
    }
    stack = ft_send_a(stack);
}