/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:42:35 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/24 00:42:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

int ft_lenparsing(char **av, int ac)
{
    int i;
    int j;
    int len;
    char **tmp;

    i = 1;
    j = 0;
    len = 0;
    while(i < ac)
    {
        if (ft_strchr(av[i], ' '))
        {
            j = 0;
            tmp = ft_split(av[i], ' ');
            while(tmp[j])
            {
                len++;
                j++;
                
            }
        }
        else
            len++;;
        i++;
    }
    return(len);
}

char **ft_parsing(char **av, int ac)
{
    int i;
    int j;
    int x;
    char **tmp;
    char **tab;

    i = 1;
    j = 0;
    x = 0;
    tab = malloc(sizeof(char *) * ft_lenparsing(av,ac) + 1);
    if (!tab)
        exit(1);
    while(i < ac)
    {
        if (ft_strchr(av[i], ' '))
        {
            j = 0;
            tmp = ft_split(av[i], ' ');
            while(tmp[j])
                tab[x++] = ft_strdup(tmp[j++]);
        }
        else
        {
            tab[x] = ft_strdup(av[i]);
            x++;
        }
        i++;
    }
    tab[x] = NULL;
    return(tab);
}