/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:58:46 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/25 23:37:36 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_fillstack(int ac, char **av, t_stack s)
{
	int	i;

	i = 0;
	s.s_a = malloc(sizeof(int) * ac);
	s.top_a++;
	while (av[i])
	{
		s.s_a[i] = ft_atoi(av[i]);
		i++;
	}
	s.bot_a = ft_lenparsing(av, ac);
	return (s);
}
