/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortfive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:29:24 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 21:26:00 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sorthfive(t_stack s)
{
	int	i;
	int	small;

	i = 0;
	while (i < 2)
	{
		small = ft_smallest(s);
		if (small <= s.bot_a / 2)
		{	
			while (small--)
				s = ft_rotate_ra(s, 1);
			s = ft_push_pb(s, 1);
		}
		else
		{
			while (small++ <= s.bot_a)
				s = ft_reverse_ra(s, 1);
			s = ft_push_pb(s, 1);
		}
		i++;
	}
	s = ft_sortthree(s);
	s = ft_push_pa(s, 1);
	s = ft_push_pa(s, 1);
	return (s);
}
