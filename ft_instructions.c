/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:29:28 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/09 22:25:07 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_stack	ft_swap_a(t_stack stack)
{
	int	tmp;

	if (stack.top_a != -1)
	{
		tmp = stack.stack_a[0];
		stack.stack_a[0] = stack.stack_a[1];
		stack.stack_a[1] = tmp;
	}
	write(1,"sa\n", 4);
	return (stack);
}

t_stack	ft_swap_b(t_stack stack)
{
	int	tmp;

	if (stack.top_b != -1)
	{
		tmp = stack.stack_b[0];
		stack.stack_b[0] = stack.stack_b[1];
		stack.stack_b[1] = tmp;
	}
	write(1,"sb\n", 4);
	return(stack);
}

t_stack	ft_swap_ss(t_stack stack)
{	
	stack = ft_swap_a(stack);
	stack = ft_swap_b(stack);
	write(1, "ss\n", 4);
	return(stack);
}

t_stack	ft_push_pa(t_stack stack)
{

	stack.top_a++;
	stack.stack_a[stack.top_a] = stack.stack_b[stack.top_b];
	stack.top_b--;
	write(1,"pa\n", 4);
	return(stack);
}

t_stack	ft_push_pb(t_stack stack)
{
	stack.top_b++;
	stack.stack_b[stack.top_b] = stack.stack_a[stack.top_a];
	stack.top_a--;
	write(1,"pb\n", 4);
	return(stack);
}

t_stack	ft_rotate_ra(t_stack stack)
{
	int i;
	int	j;
	int tmp;

	i = 0;
	tmp = stack.stack_a[0];
	j = stack.bot_a;
	while( j <= i)
	{
		stack.stack_a[i + 1] = stack.stack_a[i];
		stack.stack_a[i] = tmp;
		i++;
	}
	write(1,"ra\n", 4);
	return(stack);
}	

t_stack	ft_rotate_rb(t_stack stack)
{
	int i;
	int	j;
	int tmp;

	i = 0;
	tmp = stack.stack_b[0];
	j = stack.bot_b;
	while( j <= i)
	{
		stack.stack_b[i + 1] = stack.stack_b[i];
		stack.stack_b[i] = tmp;
		i++;
	}
	write(1,"rb\n", 4);
	return(stack);
}

t_stack ft_ra_rb(t_stack stack)
{
    stack = ft_rotate_ra(stack);
	stack = ft_rotate_rb(stack);
	write(1, "rr\n", 4);
	return(stack);
}

t_stack	ft_reverse_ra(t_stack stack)
{
	int i;
	int	j;
	int tmp;

	i = 0;
	tmp = stack.stack_a[0];
	j = stack.bot_a;
	while(j <= i)
	{
		stack.stack_a[i] = stack.stack_a[i + 1];
		stack.stack_a[i] = tmp;
		i++;
	}
	write(1,"rra\n", 4);
	return(stack);
}

t_stack	ft_reverse_rb(t_stack stack)
{
	int i;
	int	j;
	int tmp;

	i = 0;
	tmp = stack.stack_b[0];
	j = stack.bot_b;
	while( j < i)
	{
		stack.stack_b[i + 1] = stack.stack_b[i];
		stack.stack_b[i] = tmp;
		i--;
	}
	write(1,"rrb\n", 4);
	return(stack);
}

t_stack ft_rra_rrb(t_stack stack)
{
	stack = ft_reverse_ra(stack);
	stack = ft_reverse_rb(stack);
    write(1, "rrr\n", 4);
	return(stack);
}