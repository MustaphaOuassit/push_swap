/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:29:04 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 19:17:03 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorting(t_stacks *stack)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = 0;
	t = 0;
	while (i != stack->len_a)
	{
		j = i + 1;
		while (j != stack->len_a)
		{
			if (stack->a[i] < stack->a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sort(t_stacks *stack)
{
	if (stack->a[0] < stack->a[1])
		return (0);
	return (1);
}

void	fill_table(int *stack, int len, int *table)
{
	int	i;

	i = 0;
	while (i != len)
	{
		table[i] = stack[i];
		i++;
	}
}

int	check_in_chunck(int *table, int len, int stack)
{
	int	i;

	i = 0;
	while (i != len)
	{
		if (table[i] == stack)
			return (1);
		i++;
	}
	return (0);
}

void	chuncks(t_stacks *stack, int *table, int len)
{
	t_variables	variable;

	variable.i = 0;
	variable.count = 0;
	variable.count = stack->len_a / 2;
	while (variable.i != stack->len_a)
	{
		if (check_in_chunck(table, len, stack->a[variable.i]))
			variable.i = contunue_chunck(
					stack, stack->a[variable.i], variable.i, variable.count);
		variable.i++;
	}
}
