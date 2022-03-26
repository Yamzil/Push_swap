/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 05:42:35 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 11:28:58 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checker_norm(t_stack s, int ac, char **av)
{
	int		len;
	char	**tab;

	len = ft_lenparsing(av, ac);
	tab = ft_parsing(av, ac);
	if (ac < 2)
		exit (0);
	if (ft_checkarguments(tab, len))
		exit (0);
	if (ft_checkduplicate(s, len))
		exit (0);
	if (ft_checkint(len, ft_parsing(av, ac)))
		exit (0);
}
