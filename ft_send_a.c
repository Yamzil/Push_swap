/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:17:10 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 07:32:18 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_send_a(t_stack s)
{
	int	bestmv_rb;
	int	bestmv_rrb;
	int	biggest ;

	while (s.bot_b != s.top_b)
	{
		biggest = ft_biggest(s);
		bestmv_rb = biggest - s.top_b;
		bestmv_rrb = s.bot_b - biggest;
		if (bestmv_rb > bestmv_rrb)
		{
			while (bestmv_rrb--)
				s = ft_reverse_rb(s, 1);
			s = ft_push_pa(s, 1);
		}
		else
		{
			while (bestmv_rb--)
				s = ft_rotate_rb(s, 1);
			s = ft_push_pa(s, 1);
		}
	}
	return (s);
}
