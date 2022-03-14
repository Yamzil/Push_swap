/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:29:28 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/13 22:45:52 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_stack	ft_swap_a(t_stack stack)
{
	int	tmp;

	tmp = stack.stack_a[0];
	stack.stack_a[0] = stack.stack_a[1];
	stack.stack_a[1] = tmp;
	write(1, "sa\n", 3);
	return (stack);
}

t_stack	ft_swap_b(t_stack stack)
{
	int	tmp;

	tmp = stack.stack_b[stack.top_b];
	stack.stack_b[stack.top_b] = stack.stack_b[stack.top_b - 1];
	stack.stack_b[stack.top_b - 1] = tmp;
	write(1, "sb\n", 3);
	return (stack);
}

t_stack	ft_swap_ss(t_stack stack)
{
	stack = ft_swap_a(stack);
	stack = ft_swap_b(stack);
	write(1, "ss\n", 3);
	return (stack);
}

t_stack	ft_push_pa(t_stack stack)
{
	int i;

	i = stack.bot_a;
	if(stack.top_b == stack.bot_b)
		exit(1);
	while (i >= 0)
	{
		stack.stack_a[i + 1] = stack.stack_a[i];
		i--;
	}
	stack.bot_a++;
	stack.stack_a[0] = stack.stack_b[stack.top_b];
	stack.top_b++;
	write(1, "pa\n", 3);
	return (stack);
}

t_stack	ft_push_pb(t_stack stack)
{
	int i;

	i = 0;
	if (stack.bot_a == -1)
		return stack;
	stack.top_b--;
	stack.stack_b[stack.top_b] = stack.stack_a[0];
	while(i < stack.bot_a)
	{
	stack.stack_a[i] = stack.stack_a[i + 1];
		i++;
	}
	stack.bot_a--;
	write(1, "pb\n", 3);
	return (stack);
}

t_stack	ft_rotate_ra(t_stack stack)
{
	int i;
	int	tmp;

	i = 0;
	tmp = stack.stack_a[0];
	while(i < stack.bot_a)
	{
	stack.stack_a[i] =stack.stack_a[i + 1];
		i++;
	}
	stack.stack_a[stack.bot_a] = tmp;
	write(1, "ra\n", 3);
	return (stack);

}


t_stack	ft_rotate_rb(t_stack stack)
{
	int	i;
	int	tmp;

	i = stack.top_b;
	tmp = stack.stack_b[stack.top_b];
	while (i < stack.bot_b - 1)
	{
	stack.stack_b[i] = stack.stack_b[i + 1];
		i++;
	}
	stack.stack_b[stack.bot_b - 1] = tmp;
	write(1, "rb\n", 3);
	return(stack);
}

t_stack ft_ra_rb(t_stack stack)
{
	stack = ft_rotate_ra(stack);
	stack = ft_rotate_rb(stack);
	write(1, "rr\n", 3);
	return (stack);
}

t_stack	ft_reverse_ra(t_stack stack)
{
	int	i;
	int	tmp;

	i = stack.bot_a;
	tmp = stack.stack_a[i];
	while (i > 0)
	{
	stack.stack_a[i] = stack.stack_a[i - 1];
		i--;
	}
	stack.stack_a[0] = tmp;
	write(1, "rra\n", 4);
	return (stack);
}

t_stack	ft_reverse_rb(t_stack stack)
{
	int	i;
	int	tmp;

	i = stack.bot_b - 1;
	tmp = stack.stack_b[i];
	while(i > stack.top_b)
	{
	stack.stack_b[i] =stack.stack_b[i - 1];
		i--;
	}
	stack.stack_b[stack.top_b] = tmp;
	write(1, "rrb\n", 4);
	return (stack);
}

t_stack	ft_rra_rrb(t_stack stack)
{
	stack = ft_reverse_ra(stack);
	stack = ft_reverse_ra(stack);
	return (stack);
	write(1, "rrr\n", 4);
}