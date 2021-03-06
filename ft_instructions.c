/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:29:28 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 21:20:29 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_stack	ft_reverse_ra(t_stack s, int flag)
{
	int	i;
	int	tmp;

	i = s.bot_a;
	tmp = s.s_a[i];
	while (i > 0)
	{
	s.s_a[i] = s.s_a[i - 1];
		i--;
	}
	s.s_a[0] = tmp;
	if (flag == 1)
		write(1, "rra\n", 4);
	return (s);
}

t_stack	ft_reverse_rb(t_stack s, int flag)
{
	int	i;
	int	tmp;

	i = s.bot_b - 1;
	tmp = s.s_b[i];
	while (i > s.top_b)
	{
	s.s_b[i] = s.s_b[i - 1];
		i--;
	}
	s.s_b[s.top_b] = tmp;
	if (flag == 1)
		write(1, "rrb\n", 4);
	return (s);
}

t_stack	ft_rra_rrb(t_stack s)
{
	s = ft_reverse_ra(s, 0);
	s = ft_reverse_ra(s, 0);
	return (s);
	write(1, "rrr\n", 4);
}
