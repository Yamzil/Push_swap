/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:07:57 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/20 19:01:23 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// Store and tracked stored data
typedef struct s_stack{
	int	*stack_a;
	int	*stack_b;
	int	*stack_tmp;
	int	top_a;
	int top_b;
	int	bot_a;
	int bot_b;
} t_stack;

// Libft functions :
long	ft_atoi(char *str);
int		ft_isdigit(char c);
int		ft_strlen(const char *s);
char	*ft_substr(const char *s, int start, int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);

// Handler functions :
int	ft_checkarguments(char *str);
int ft_checkduplicate(t_stack stack);

// Instructions functions :
t_stack	ft_swap_a(t_stack stack);
t_stack	ft_swap_b(t_stack stack);
t_stack	ft_swap_ss(t_stack stack);
t_stack	ft_push_pa(t_stack stack);
t_stack	ft_push_pb(t_stack stack);
t_stack	ft_rotate_ra(t_stack stack);
t_stack	ft_rotate_rb(t_stack stack);
t_stack ft_ra_rb(t_stack stack);
t_stack	ft_reverse_ra(t_stack stack);
t_stack	ft_reverse_rb(t_stack stack);
t_stack ft_rra_rrb(t_stack stack);

// Algo functions :
int 	ft_sorted(t_stack stack, int ac);
int 	ft_biggest(t_stack stack);
int		ft_smallest(t_stack stack);
t_stack ft_sort_table(t_stack stack);
t_stack ft_sorthundred(t_stack stack);
t_stack	ft_fillstack(int ac, char **av, t_stack stack);
t_stack	ft_sortthree(t_stack stack);
t_stack ft_sorthfive(t_stack stack);
t_stack ft_tmpstack(t_stack stack);
t_stack ft_send_a(t_stack stack);
t_stack ft_sortfivehundred(t_stack stack);

// Get Next Line functions
char    *get_next_line(int fd);

// BONUS
int ft_checker(char *arguments, t_stack stack);
#endif