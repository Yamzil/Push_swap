/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:50:26 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 07:32:32 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sort_table(t_stack s)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < s.bot_a)
	{
		j = 0;
		while (j < s.bot_a)
		{
			if (s.s_tmp[j] > s.s_tmp[j + 1])
			{
				tmp = s.s_tmp[j];
				s.s_tmp[j] = s.s_tmp[j + 1];
				s.s_tmp[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (s);
}
