/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:07:57 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 11:08:05 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

// Store and tracked stored data
typedef struct s_stack{
	int	*s_a;
	int	*s_b;
	int	*s_tmp;
	int	top_a;
	int	top_b;
	int	bot_a;
	int	bot_b;
}	t_stack;

// Libft functions :
long long	ft_atoi(const char *str);
int			ft_isdigit(char c);
char		*ft_strdup(const char *s1);
size_t		ft_strlen(const char *s);
char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_strncmp(const char *s1, const char *s2);

// Handler functions :
int			ft_checkarguments(char **av, int len);
int			ft_checkduplicate(t_stack s, int len);
int			ft_checkint(int len, char **av);
int			ft_lenparsing(char **av, int ac);
char		**ft_parsing(char **av, int ac);
char		**ft_norm(char **tab, char **av, int ac);
int			ft_push_norm(t_stack s, int ac, char **av);
int			ft_normac(int ac, char **av, t_stack s);

// Instructions functions :
t_stack		ft_swap_a(t_stack s, int flag);
t_stack		ft_swap_b(t_stack s, int flag);
t_stack		ft_swap_ss(t_stack s);
t_stack		ft_push_pa(t_stack s, int flag);
t_stack		ft_push_pb(t_stack s, int flag);
t_stack		ft_rotate_ra(t_stack s, int flag);
t_stack		ft_rotate_rb(t_stack s, int flag);
t_stack		ft_ra_rb(t_stack s);
t_stack		ft_reverse_ra(t_stack s, int flag);
t_stack		ft_reverse_rb(t_stack s, int flag);
t_stack		ft_rra_rrb(t_stack s);

// Algo functions :
int			ft_sorted(t_stack s);
int			ft_biggest(t_stack s);
int			ft_smallest(t_stack s);
t_stack		ft_sort_table(t_stack s);
t_stack		ft_sorthundred(t_stack s);
t_stack		ft_fillstack(int ac, char **av, t_stack s);
t_stack		ft_sortthree(t_stack s);
t_stack		ft_sorthfive(t_stack s);
t_stack		ft_tmpstack(t_stack s);
t_stack		ft_send_a(t_stack s);
t_stack		ft_sortfivehundred(t_stack s);
void		ft_sort_big(t_stack s);
int			ft_sort_small(t_stack s);
t_stack		ft_free(t_stack s);
void		free_double(char **tab);

// Get Next Line functions
char		*get_next_line(int fd);

// BONUS
t_stack		ft_checker(char *arguments, t_stack s);
void		ft_checker_norm(t_stack s, int ac, char **av);
t_stack		sort_norm(int ac, char **av, t_stack s);
void		ft_error(void);
#endif
