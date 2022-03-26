/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmpstack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:38:16 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 23:02:18 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_tmpstack(t_stack s)
{
	int	i;

	s.s_tmp = malloc((s.bot_a + 1) * sizeof(int));
	i = 0;
	while (i <= s.bot_a)
	{
		s.s_tmp[i] = s.s_a[i];
		i++;
	}
	return (s);
}
