/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortfivehundred.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:47:14 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 21:56:48 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sortfivehundred(t_stack s)
{
	int	i;
	int	chunk;
	int	div;

	chunk = s.bot_a / 5;
	div = chunk / 2;
	i = 0;
	while (i <= s.bot_a)
	{
		if (s.s_a[i] <= s.s_tmp[chunk])
		{
			while (i--)
				s = ft_rotate_ra(s, 1);
			if ((s.s_a[0] <= s.s_tmp[chunk]))
				s = ft_push_pb(s, 1);
			if (s.s_a[0] > s.s_tmp[chunk] && s.s_b[s.top_b] < s.s_tmp[div])
				s = ft_ra_rb(s);
			else if (s.s_b[s.top_b] < s.s_tmp[div])
				s = ft_rotate_rb(s, 1);
		}
		i++;
	}
	return (s);
}
