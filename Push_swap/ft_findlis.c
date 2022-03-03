/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findlis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 06:27:52 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/02 15:25:15 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_findlis(int str[], int n)
{
	int	i;
	int	j;
	int arr[n];
	
	i = 0;
	arr[0] = 1;
	while(i < n)
	{
		j = 0;
		arr[j] = 1;
		while(j < i)
		{
			if (str[i] > str[j] && arr[i] < arr[j] + 1)
				arr[i] = arr[j] + 1;
			j++;
		}
		i++;
	}
}