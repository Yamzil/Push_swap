/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:26:59 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/24 02:40:32 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack stack;
    int     i;

    
    stack.stack_b = malloc(sizeof(int) * (ac - 1));
    stack.top_a = -1;
    stack.top_b = ac - 1;
    stack.bot_a = -1;
    stack.bot_b = ac - 1;
    i = 1;
	stack = ft_fillstack(ft_lenparsing(av,ac), ft_parsing(av, ac), stack);
    if (ft_checkarguments(ft_parsing(av, ac),ft_lenparsing(av,ac)))
		return(0);
    if (ft_checkduplicate(stack))
        return (0);
    if (!ft_sorted(stack, ac))
    {
        return (1);
        exit(0);
    }
    ft_sort_small(stack);
    ft_sort_big(stack);
}