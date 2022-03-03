/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:26:59 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/03 18:01:38 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    int     i;
    t_list *stack_a;

    i = 1;
    stack_a = NULL;
    if(ac < 2)
    {
        while(av[i])
        {
            ft_split(av[i], 32);
            i++;
        }
    }
	if(ft_sorted(stack_a))
		write(1,"Deja baguette\n", 15);
    if (ft_checkduplicate(ft_convertarg(ac, av)))
        write(2, "Dupliacte Error \n", 18);
    while (i < ac)
    { 
        if (!ft_checkarguments(av[i]))
            write(2, "Arguments Error \n", 18);
        i++;
    }
    
}
