/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:26:59 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/21 22:20:31 by yamzil           ###   ########.fr       */
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
    if (ac == 2)
        return (0);
    if (ft_checkduplicate(stack))
        return (0);
    while(i < ac)
    {
        if (ft_checkarguments(*av))
            return(0);
        i++;
    }
    if (stack.bot_a == 4)
    {
        stack = ft_sorthfive(stack);
        return (0);
    }
    if (stack.bot_a == 2)
    {
        stack = ft_sortthree(stack);
        return (0);
    }
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
     stack = ft_free(stack);
}