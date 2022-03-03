/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:22:57 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/02 18:54:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_checkarguments(char *str)
{
    int i;
    
    i = 0;
    if (str[0] == '-' || str[0] == '+')
        i++;
    if ((ft_atoi(str) > 2147483647) || (ft_atoi(str) < -2147483648))
        return(0);
    while(str[i])
    {
        if (ft_isdigit(str[i]))
            i++;
        else
            return(0);
    }
    return(1);
}

int *ft_convertarg(int ac, char **av)
{
    int j;
    int i;
    int *arr;
    
    arr = malloc(sizeof(int) * ac - 1);
    if (!arr)
        return(NULL);
    j = 1;
    i = 0;
    while(j < ac)
    {
        arr[i++] = ft_atoi(av[j]);
        j++;
    } 
    return(arr);
}

int ft_checkduplicate(int *str)
{
    int	i;
	int	j;
	
	i = 0;
	while(str[i])
	{
		j = i + 1;
		while(str[j])
		{
			if(str[i] == str[j])
			{
				return(1);
				exit(1);
			}
			j++;
		}
		i++;
	}
    return(0);
}