/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjlem <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:19:47 by mjlem             #+#    #+#             */
/*   Updated: 2022/02/28 09:08:46 by mjlem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack	sa(t_stack utils)
{
	int	tmp;

	tmp = utils.stack_a[0];
	utils.stack_a[0] = utils.stack_a[1];
	utils.stack_a[1] = tmp;
	write(1, "sa\n", 3);
	return (utils);
}

t_stack	sb(t_stack utils)
{
	int	tmp;

	tmp = utils.stack_b[utils.top_b];
	utils.stack_b[utils.top_b] = utils.stack_b[utils.top_b - 1];
	utils.stack_b[utils.top_b - 1] = tmp;
	write(1, "sb\n", 3);
	return (utils);
}

t_stack	ss(t_stack utils)
{
	utils = sa(utils);
	utils = sb(utils);
	write(1, "ss\n", 3);
	return (utils);
}

t_stack	pa(t_stack utils)
{
	int i;

	i = utils.tail_a;
	if(utils.top_b == utils.tail_b)
		exit(1);
	while (i >= 0)
	{
		utils.stack_a[i + 1] = utils.stack_a[i];
		i--;
	}
	utils.tail_a++;
	utils.stack_a[0] = utils.stack_b[utils.top_b];
	utils.top_b++;
	write(1, "pa\n", 3);
	return (utils);
}

t_stack	pb(t_stack utils)
{
	int i;

	i = 0;
	if(utils.tail_a == -1)
		return utils;
	utils.top_b--;
	utils.stack_b[utils.top_b] = utils.stack_a[0];
	while(i < utils.tail_a)
	{
		utils.stack_a[i] = utils.stack_a[i + 1];
		i++;
	}
	utils.tail_a--;
	write(1, "pb\n", 3);
	return (utils);
}

t_stack	ra(t_stack utils)
{
	int i;
	int	tmp;

	i = 0;
	tmp = utils.stack_a[0];
	while(i < utils.tail_a)
	{
		utils.stack_a[i] = utils.stack_a[i + 1];
		i++;
	}
	utils.stack_a[utils.tail_a] = tmp;
	write(1, "ra\n", 3);
	return (utils);

}


t_stack	rb(t_stack	utils)
{
	int	i;
	int	tmp;

	i = utils.top_b;
	tmp = utils.stack_b[utils.top_b];
	while (i < utils.tail_b - 1)
	{
		utils.stack_b[i] = utils.stack_b[i + 1];
		i++;
	}
	utils.stack_b[utils.tail_b - 1] = tmp;
	write(1, "rb\n", 3);
	return(utils);
}

t_stack rr(t_stack	utils)
{
	utils = ra(utils);
	utils = rb(utils);
	write(1, "rr\n", 3);
	return (utils);
}

t_stack	rra(t_stack	utils)
{
	int	i;
	int	tmp;

	i = utils.tail_a;
	tmp = utils.stack_a[i];
	while (i > 0)
	{
		utils.stack_a[i] = utils.stack_a[i - 1];
		i--;
	}
	utils.stack_a[0] = tmp;
	write(1, "rra\n", 4);
	return (utils);
}

t_stack	rrb(t_stack utils)
{
	int	i;
	int	tmp;

	i = utils.tail_b - 1;
	tmp = utils.stack_b[i];
	while(i > utils.top_b)
	{
		utils.stack_b[i] = utils.stack_b[i - 1];
		i--;
	}
	utils.stack_b[utils.top_b] = tmp;
	write(1, "rrb\n", 4);
	return (utils);
}

t_stack	rrr(t_stack	utils)
{
	utils = rra(utils);
	utils = rrb(utils);
	return (utils);
	write(1, "rrr\n", 4);
}

int	main(int ac, char **av)
{
	int l;
	int i;
	// int j;
	t_stack	utils;
	// int	k = 0;

	i = 1;
	l = 0;
	if (ac > 1)
	{
		if (check(av))
		{
			utils.top_a = -1;
			utils.tail_a = -1;
			utils.top_b = ac - 1;
			utils.tail_b = ac - 1;
			utils.stack_a = malloc((ac - 1) * sizeof(int));
			utils.stack_b = malloc((ac - 1) * sizeof(int));
			while (av[i])
			{
				utils.tail_a++;
				if(utils.tail_a == 0)
					utils.top_a++;
				utils.stack_a[utils.tail_a] = ft_atoi(av[i]);
				i++;
			}
			if (!duplicate(utils.stack_a, ac - 1))
				return (0);
			while (utils.tail_a)
			{
				if (is_sorted(utils))
					break;
				utils = tmp_sort(ft_stacpy(utils));
				utils = send_to_b(utils);
			}
			utils = send_to_a(utils);
		}
	}
}
/* 			while (l <= utils.tail_a)
			{
				printf("a = %d\n", utils.stack_a[l]);
				l++;
			}
			j = utils.top_b;
			while(j < utils.tail_b)
			{
				printf("b = %d\n", utils.stack_b[j]);
				j++;
			} */

/* 			while (k <= utils.tail_a)
			{
				printf("-%d-\n",utils.tmp_stack[k]);
				k++;
			} */