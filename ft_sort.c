/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:35:08 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 10:57:12 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_small(t_stack s)
{
	if (s.bot_a == 4)
	{
		s = ft_sorthfive(s);
		s = ft_free(s);
		return (1);
	}
	else if (s.bot_a == 2)
	{
		s = ft_sortthree(s);
		s = ft_free(s);
		return (1);
	}
	return (0);
}

void	ft_sort_big(t_stack s)
{
	if (s.bot_a <= 100)
	{
		while (s.bot_a)
		{
			s = ft_sort_table(ft_tmpstack(s));
			s = ft_sorthundred(s);
			free(s.s_tmp);
		}
		s = ft_send_a(s);
	}
	else
	{
		while (s.bot_a)
		{
			s = ft_sort_table(ft_tmpstack(s));
			s = ft_sortfivehundred(s);
			free(s.s_tmp);
		}
		s = ft_send_a(s);
	}
}
