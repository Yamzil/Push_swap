/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:02:18 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/20 22:31:44 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_checker(char *arguments, t_stack stack)
{	
	if (ft_strncmp("sa", arguments))
		stack = ft_swap_a(stack);
	else if (ft_strncmp("sb", arguments))
		stack = ft_swap_b(stack);
	else if (ft_strncmp("ss", arguments))
		stack = ft_swap_ss(stack);
	else if (ft_strncmp("pa", arguments))
		stack = ft_push_pa(stack);
	else if (ft_strncmp("pb", arguments))
		stack = ft_push_pb(stack);
	else if (ft_strncmp("ra", arguments))
		stack = ft_rotate_ra(stack);
	else if (ft_strncmp("rb", arguments))
		stack = ft_rotate_rb(stack);
	else if (ft_strncmp("rr", arguments))
		stack = ft_ra_rb(stack);
	else if (ft_strncmp("rra", arguments))
		stack = ft_reverse_ra(stack);
	else if (ft_strncmp("rrb", arguments))
		stack = ft_reverse_rb(stack);
	else if (ft_strncmp("rrr", arguments))
		stack = ft_rra_rrb(stack);
	else
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	char 	*arguments;
	t_stack stack;
	int		i;

	i = 0;
	arguments = get_next_line(0);
}