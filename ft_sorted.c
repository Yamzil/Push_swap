/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:14:14 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 11:08:52 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted(t_stack s)
{
	int	i;

	i = 1;
	while (i < s.bot_a)
	{
		if (s.s_a[i] > s.s_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
