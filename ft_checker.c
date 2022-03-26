/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:02:18 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/26 11:28:25 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_checker(char *arguments, t_stack s)
{
	if (!ft_strncmp("sa", arguments))
		s = ft_swap_a(s, 0);
	else if (!ft_strncmp("sb", arguments))
		s = ft_swap_b(s, 0);
	else if (!ft_strncmp("ss", arguments))
		s = ft_swap_ss(s);
	else if (!ft_strncmp("pa", arguments))
		s = ft_push_pa(s, 0);
	else if (!ft_strncmp("pb", arguments))
		s = ft_push_pb(s, 0);
	else if (!ft_strncmp("ra", arguments))
		s = ft_rotate_ra(s, 0);
	else if (!ft_strncmp("rb", arguments))
		s = ft_rotate_rb(s, 0);
	else if (!ft_strncmp("rr", arguments))
	s = ft_ra_rb(s);
	else if (!ft_strncmp("rra", arguments))
		s = ft_reverse_ra(s, 0);
	else if (!ft_strncmp("rrb", arguments))
		s = ft_reverse_rb(s, 0);
	else if (!ft_strncmp("rrr", arguments))
		s = ft_rra_rrb(s);
	else
		ft_error();
	return (s);
}

t_stack	sort_norm(int ac, char **av, t_stack s)
{
	char	**tab;

	tab = ft_parsing(av, ac);
	if (ft_sorted(s))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_double(tab);
	return (s);
}

int	main(int ac, char **av)
{
	t_stack	s;
	char	*arguments;
	char	**tab;
	int		i;

	i = 0;
	tab = ft_parsing(av, ac);
	s.top_a = -1;
	s.top_b = ft_lenparsing(av, ac);
	s.bot_a = -1;
	s.bot_b = ft_lenparsing(av, ac);
	s.s_b = malloc (sizeof (int) * (ft_lenparsing(av, ac)));
	s = ft_fillstack (ft_lenparsing(av, ac), tab, s);
	ft_checker_norm(s, ac, av);
	ft_sorted(s);
	arguments = get_next_line(0);
	while (arguments)
	{
		s = ft_checker(arguments, s);
		free(arguments);
		arguments = get_next_line(0);
	}
	free(arguments);
	s = sort_norm(ac, av, s);
	free_double(tab);
}
