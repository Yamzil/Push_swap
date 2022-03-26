/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:03:30 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 21:19:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap_a(t_stack s, int flag)
{
	int	tmp;

	tmp = s.s_a[0];
	if (s.bot_a == 0)
		return (s);
	s.s_a[0] = s.s_a[1];
	s.s_a[1] = tmp;
	if (flag == 1)
		write(1, "sa\n", 3);
	return (s);
}

t_stack	ft_swap_b(t_stack s, int flag)
{
	int	tmp;

	tmp = s.s_b[s.top_b];
	if ((s.bot_b - s.top_b) == 1)
		return (s);
	s.s_b[s.top_b] = s.s_b[s.top_b - 1];
	s.s_b[s.top_b - 1] = tmp;
	if (flag == 1)
		write(1, "sb\n", 3);
	return (s);
}

t_stack	ft_swap_ss(t_stack s)
{
	s = ft_swap_a(s, 0);
	s = ft_swap_b(s, 0);
	write(1, "ss\n", 3);
	return (s);
}

t_stack	ft_push_pa(t_stack s, int flag)
{
	int	i;

	i = s.bot_a;
	if (s.top_b == s.bot_b)
		return (s);
	while (i >= 0)
	{
		s.s_a[i + 1] = s.s_a[i];
		i--;
	}
	s.bot_a++;
	s.s_a[0] = s.s_b[s.top_b];
	s.top_b++;
	if (flag == 1)
		write(1, "pa\n", 3);
	return (s);
}

t_stack	ft_push_pb(t_stack s, int flag)
{
	int	i;

	i = 0;
	if (s.bot_a == -1)
		return (s);
	s.top_b--;
	s.s_b[s.top_b] = s.s_a[0];
	while (i < s.bot_a)
	{
		s.s_a[i] = s.s_a[i + 1];
		i++;
	}
	s.bot_a--;
	if (flag == 1)
		write(1, "pb\n", 3);
	return (s);
}
