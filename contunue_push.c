/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contunue_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:33:58 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 17:58:19 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_in_stack_a(t_stacks *stack, int *table, int len)
{
	int	t;
	int	*take;

	t = toll_chunck(len, stack);
	take = (int *)malloc(len * sizeof(int));
	fill_chunck(stack, t, table, take);
	free(take);
}

void	sorting(int *stack, int len, int *table)
{
	int	i;
	int	j;
	int	take;

	i = 0;
	j = 0;
	take = 0;
	fill_table(stack, len, table);
	while (i != len)
	{
		j = 0;
		while (j != len)
		{
			if (table[j] > table[i])
			{
				take = table[i];
				table[i] = table[j];
				table[j] = take;
			}
			j++;
		}
		i++;
	}
}

int	is_in_table(t_stacks *stack, int nb)
{
	int	i;

	i = 0;
	while (i != stack->len_b)
	{
		if (stack->b[i] == nb)
			break ;
		i++;
	}
	return (i);
}

void	sort_b_to_a(t_stacks *stack, int *table)
{
	t_variables	var;

	var.i = 0;
	var.j = 0;
	var.indic = 0;
	var.count = stack->len_b / 2;
	var.t = stack->len_b;
	while (var.i != var.t)
	{
		var.indic = is_in_table(stack, table[(var.t - 1) - var.i]);
		var.j = 0;
		while (var.j != var.t)
		{
			if (stack->b[stack->len_b - 1] == table[(var.t - 1) - var.i])
			{
				pa(stack);
				var.count = stack->len_b / 2;
				break ;
			}
			else
				check_indice_b(stack, var.indic, var.count);
			var.j++;
		}
		var.i++;
	}
}

void	push_swap(t_stacks *stack)
{
	int	*table;

	table = (int *)malloc((stack->len_a) * sizeof(int));
	if (!check_sorting(stack))
	{
		if (stack->len_a == 2)
		{
			if (!check_sort(stack))
				sa(stack);
		}
		if (stack->len_a == 3)
			three_numbers(stack->a, stack);
		if (stack->len_a == 4)
			four_numbers(stack->a, stack);
		if (stack->len_a == 5)
			five_numbers(stack->a, stack);
		if (stack->len_a > 5)
		{
			sorting(stack->a, stack->len_a, table);
			check_in_stack_a(stack, table, stack->len_a);
			sort_b_to_a(stack, table);
		}
	}
	free(table);
}
