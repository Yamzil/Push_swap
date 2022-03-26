/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:26:59 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 11:08:16 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	s;
	int		len;
	char	**tab;

	tab = ft_parsing(av, ac);
	len = ft_lenparsing(av, ac);
	s.s_b = malloc(sizeof(int) * ft_lenparsing(av, ac));
	s.top_a = -1;
	s.top_b = ft_lenparsing(av, ac);
	s.bot_a = -1;
	s.bot_b = ft_lenparsing(av, ac);
	s = ft_fillstack(ft_lenparsing(av, ac), tab, s);
	if (ft_checkarguments(tab, len)
		|| ft_checkduplicate(s, len) || (ft_checkint(len, tab)))
		return (0);
	if (ft_sorted(s))
		return (0);
	if (ft_sort_small(s))
	{
		free_double(tab);
		return (0);
	}
	ft_sort_big(s);
	free_double(tab);
	s = ft_free(s);
}
