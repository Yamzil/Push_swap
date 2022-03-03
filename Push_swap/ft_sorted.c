/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:45:51 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/03 18:00:46 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int ft_sorted(t_list *head)
{
    if (head == NULL)
        head = ft_lstnew(head->val);
    while(head != NULL)
    {
        if (head->val > head->next->val)
            return(1);
        else
            return(0);
        head = head->next;
    }
    return(0);
}