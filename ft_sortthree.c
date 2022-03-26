/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortthree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:24:09 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 21:11:38 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sortthree(t_stack s)
{
	if (s.s_a[0] > s.s_a[1] && s.s_a[1] < s.s_a[2] && s.s_a[0] < s.s_a[2])
		s = ft_swap_a(s, 1);
	else if (s.s_a[0] > s.s_a[1] && s.s_a[1] > s.s_a[2] && s.s_a[0] > s.s_a[1])
	{
		s = ft_swap_a(s, 1);
		s = ft_reverse_ra(s, 1);
	}
	else if (s.s_a[0] > s.s_a[1] && s.s_a[1] < s.s_a[2] && s.s_a[0] > s.s_a[2])
		s = ft_rotate_ra(s, 1);
	else if (s.s_a[0] < s.s_a[1] && s.s_a[1] > s.s_a[2] && s.s_a[2] > s.s_a[0])
	{
		s = ft_swap_a(s, 1);
		s = ft_rotate_ra(s, 1);
	}
	else if (s.s_a[0] < s.s_a[1] && s.s_a[1] > s.s_a[2] && s.s_a[0] > s.s_a[2])
		s = ft_reverse_ra(s, 1);
	return (s);
}
