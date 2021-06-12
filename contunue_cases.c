/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contunue_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:35:10 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 16:41:03 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_five(t_stacks *stack, int *stack_a, int t, int i)
{
	t_variables	var;

	var.r = 0;
	var.t = t;
	while (var.r != stack->len_a)
	{
		if (stack_a[stack->len_a - 1] == var.t)
		{
			pb(stack);
			break ;
		}
		else
		{
			if (i < stack->len_a / 2)
				rra(stack);
			else
				ra(stack);
		}
		var.r++;
	}
}

void	case_four(t_stacks *stack, int *stack_a, int t, int i)
{
	t_variables	var;

	var.r = 0;
	var.t = t;
	while (var.r != stack->len_a)
	{
		if (stack_a[stack->len_a - 1] == var.t)
		{
			pb(stack);
			break ;
		}
		else
		{
			if (i < stack->len_a / 2)
				rra(stack);
			else
				ra(stack);
		}
		var.r++;
	}
}

void	four_numbers(int *stack_a, t_stacks *stack)
{
	t_variables	var;

	var.i = 0;
	var.j = 0;
	var.r = 0;
	var.t = 0;
	while (var.i != 4)
	{
		var.j = 0;
		while (var.j != stack->len_a)
		{
			if (stack_a[var.i] > stack_a[var.j])
				break ;
			var.j++;
		}
		if (var.j == 4)
			case_four(stack, stack_a, stack_a[var.i], var.i);
		var.i++;
	}
	three_numbers(stack_a, stack);
	pa(stack);
}

void	five_numbers(int *stack_a, t_stacks *stack)
{
	t_variables	var;

	var.i = 0;
	var.j = 0;
	var.r = 0;
	var.t = 0;
	while (var.i != 5)
	{
		var.j = 0;
		while (var.j != stack->len_a)
		{
			if (stack_a[var.i] > stack_a[var.j])
				break ;
			var.j++;
		}
		if (var.j == 5)
			case_five(stack, stack_a, stack_a[var.i], var.i);
		var.i++;
	}
	four_numbers(stack_a, stack);
	pa(stack);
}

void	ft_check_indice(t_stacks *stack, int i, int count)
{
	if (i < count)
		rra(stack);
	else
		ra(stack);
}
