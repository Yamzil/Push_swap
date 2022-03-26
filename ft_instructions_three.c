/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_three.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:05:22 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 21:16:38 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rotate_ra(t_stack s, int flag)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = s.s_a[0];
	while (i < s.bot_a)
	{
		s.s_a[i] = s.s_a[i + 1];
		i++;
	}
	s.s_a[s.bot_a] = tmp;
	if (flag == 1)
		write(1, "ra\n", 3);
	return (s);
}

t_stack	ft_rotate_rb(t_stack s, int flag)
{
	int	i;
	int	tmp;

	i = s.top_b;
	tmp = s.s_b[s.top_b];
	while (i < s.bot_b - 1)
	{
	s.s_b[i] = s.s_b[i + 1];
		i++;
	}
	s.s_b[s.bot_b - 1] = tmp;
	if (flag == 1)
		write(1, "rb\n", 3);
	return (s);
}

t_stack	ft_ra_rb(t_stack s)
{
	s = ft_rotate_ra(s, 0);
	s = ft_rotate_rb(s, 0);
	write(1, "rr\n", 3);
	return (s);
}
