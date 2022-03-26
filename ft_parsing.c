/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:42:35 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 07:43:39 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lenparsing(char **av, int ac)
{
	int		i;
	int		j;
	int		len;
	char	**tmp;

	i = 1;
	j = 0;
	len = 0;
	while (i < ac)
	{
		if (ft_strchr(av[i], ' '))
		{
			j = 0;
			tmp = ft_split(av[i], ' ');
			while (tmp[j++])
				len++;
			free_double(tmp);
		}
		else
			len++;
		i++;
	}
	return (len);
}

char	**ft_norm(char **tab, char **av, int ac)
{
	int		i;
	int		x;
	int		j;
	char	**tmp;

	i = 1;
	x = 0;
	while (i < ac)
	{
		if (ft_strchr(av[i], ' '))
		{
			j = 0;
			tmp = ft_split(av[i], ' ');
			while (tmp[j])
				tab[x++] = ft_strdup(tmp[j++]);
			free_double(tmp);
		}
		else
			tab[x++] = ft_strdup(av[i]);
		i++;
	}
	tab[x] = NULL;
	return (tab);
}

char	**ft_parsing(char **av, int ac)
{
	int		i;
	int		j;
	int		x;
	char	**tab;

	i = 1;
	x = 0;
	j = 0;
	tab = malloc(sizeof(char *) * ft_lenparsing(av, ac) + 1);
	tab = ft_norm(tab, av, ac);
	return (tab);
}
