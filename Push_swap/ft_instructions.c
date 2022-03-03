/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:29:28 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/03 17:59:49 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// t_list **ft_swap(t_list **first, t_list **last,char c)
// {
//     t_list **tmp;
    
//     tmp = last->val;
//     last = first->val;
//     first = &tmp->val;
//     if (c  == 'a')
//         write(1, "sa\n", 3);
//     else if (c == 'b')
//         write(1,"sb\n", 3);
//     return(first);
// }

// int main()
// {
//     t_list *g;
//     t_list *k;

//     g =  ft_lstnew(5);
//     k = ft_lstnew(1);
//     printf("%s", ft_swap(&g, &k, 'a'));
// }

// void ft_swap_ss(t_list *first, t_list *first_1, t_list *last, t_list *last_1)
// {
//     char c;
//     ft_swap(first, last,c);
//     ft_swap(first_1, last_1,c);
//     c == 'ss';
//         write(1,"ss\n", 3);
// }

// void ft_push(t_list *stack_a, t_list *stack_b, char c)
// {
//     t_list *head;
    
//     head = stack_a->next;
//     while(head != NULL)
//     {
//         stack_a = stack_b->next;
//         head = stack_a->next->next;
//     }
//     if (c == 'a')
//         write(1,"pa\n", 3);
//     else
//         write(1,"pb\n", 3);
// }

// void *ft_rotate(t_list *elm, char c)
// {
//     t_list **head;
    
//     head = elm->next;
//     while(head != NULL)
//     {
//         elm = ft_lstadd_back(head, elm);
//     }
//     if (c == 'a')
//         write(1, "ra\n", 3);
//     else
//         write(1,"rb\n", 3);
// }

// void ft_ra_rb(t_list *elm)
// {
//     char c;
//     ft_rotate(elm,c);
//     c == 'ss';
//         write(1,"rr\n", 3);
// }

// void *ft_reverse(t_list *elm, char c)
// {
//     t_list **head;
    
//     head = elm->next;
//     while(head != NULL)
//     {
//         elm = ft_lstlast(head);
//     }
//     elm = ft_lstadd_front(head, elm);
//     if (c == 'a')
//         write(1,"rra\n", 4);
//     else
//         write(1,"rrb\n", 4);
// }

// void ft_rra_rrb(t_list *elm, char c)
// {
//     ft_reverse(elm,c);
//     c == 'rrr';
//         write(1, "rrr\n", 4);
// }