/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contunue_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:38:08 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 19:13:21 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks *stack)
{
	if (stack->len_b > 0)
	{
		stack->a[stack->len_a] = stack->b[stack->len_b - 1];
		stack->len_a = stack->len_a + 1;
		stack->len_b = stack->len_b - 1;
		write (1, "pa\n", ft_strlen("pa") + 1);
	}
}

void	pb(t_stacks *stack)
{
	if (stack->len_a > 0)
	{
		stack->b[stack->len_b] = stack->a[stack->len_a - 1];
		stack->len_b = stack->len_b + 1;
		stack->len_a = stack->len_a - 1;
		write(1, "pb\n", ft_strlen("pb") + 1);
	}
}

int	toll_chunck(int len, t_stacks *stack)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = 0;
	t = 1;
	while (i != len)
	{
		if (j == stack->offset)
		{
			t++;
			j = 0;
		}
		i++;
		j++;
	}
	return (t);
}

void	fill_chunck(t_stacks *stack, int t, int *table, int *take)
{
	int			len;
	t_variables	var;

	var.i = 0;
	var.j = 0;
	var.m = 0;
	var.r = 0;
	len = stack->len_a;
	while (var.i != t)
	{
		var.r = 0;
		while (var.j != len)
		{
			if (var.m == stack->offset)
				break ;
			else
				take[var.r] = table[var.j];
			var.m++;
			var.j++;
			var.r++;
		}
		chuncks(stack, take, var.m);
		var.m = 0;
		var.i++;
	}
}

void	check_indice_b(t_stacks *stack, int indice, int count)
{
	if (indice < count)
		rrb(stack);
	else
		rb(stack);
}
