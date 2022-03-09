/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortthree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:24:09 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/08 21:28:53 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_sortthree(t_stack stack)
{
	if (stack.stack_a[0] > stack.stack_a[1] && stack.stack_a[1] < stack.stack_a[2] && stack.stack_a[0] < stack.stack_a[2])
		stack = ft_swap_a(stack);
	else if (stack.stack_a[0] > stack.stack_a[1] && stack.stack_a[1] > stack.stack_a[2] && stack.stack_a[0] > stack.stack_a[1])
	{
		stack = ft_swap_a(stack);
		stack = ft_reverse_ra(stack);
	}
	else if (stack.stack_a[0] > stack.stack_a[1] && stack.stack_a[1] < stack.stack_a[2] && stack.stack_a[0] > stack.stack_a[2])
		stack = ft_rotate_ra(stack);
	else if (stack.stack_a[0] < stack.stack_a[1] && stack.stack_a[1] > stack.stack_a[2] && stack.stack_a[2] > stack.stack_a[0])
	{
		stack = ft_swap_a(stack);
		stack = ft_rotate_ra(stack);
	}
	else if (stack.stack_a[0] < stack.stack_a[1] && stack.stack_a[1] > stack.stack_a[2] && stack.stack_a[0] > stack.stack_a[2])
		stack = ft_reverse_ra(stack);
	return(stack);
}