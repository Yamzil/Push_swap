/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:07:57 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/03 17:55:08 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <limits.h>

typedef struct s_list {
	int				val;
	struct s_list *next;
} t_list;

// Libft functions :
long long		ft_atoi(char *str);
int				ft_isdigit(char c);
int	    		ft_strlen(const char *s);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(int content);
void			*ft_lstadd_back(t_list **lst, t_list *new);
void			*ft_lstadd_front(t_list **lst, t_list *new);
char			*ft_substr(const char *s, int start,	int len);
char			**ft_split(char const *s, char c);

// Handler functions :
int		*ft_convertarg(int ac, char **av);
int		ft_checkduplicate(int *str);
int     ft_checkarguments(char *str);

// Instructions functions :
t_list **ft_swap(t_list **first, t_list **last,char c);
void ft_swap_ss(t_list *first, t_list *first_1, t_list *last, t_list *last_1);
void ft_push(t_list *stack_a, t_list *stack_b, char c);
void *ft_rotate(t_list *elm, char c);
void ft_ra_rb(t_list *elm);
void *ft_reverse(t_list *elm, char c);

// Algo functions :
void	ft_findlis(int str[], int n);
int		ft_sorted();

#endif