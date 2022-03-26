/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_biggest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:14:39 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 21:12:12 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_biggest(t_stack s)
{
	int	i;
	int	biggest;

	i = s.top_b;
	biggest = i;
	while (i < s.bot_b)
	{
		if (s.s_b[i] > s.s_b[biggest])
			biggest = i;
		i++;
	}
	return (biggest);
}
