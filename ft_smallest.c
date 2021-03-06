/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:17:48 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 21:23:23 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smallest(t_stack s)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = i;
	while (i <= s.bot_a)
	{
		if (s.s_a[i] < s.s_a[smallest])
			smallest = i;
		i++;
	}
	return (smallest);
}
