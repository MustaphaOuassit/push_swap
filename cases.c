/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:32:28 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 21:01:56 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(int *table, int stack, int len)
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

int	number(int argc, char **argv, int check)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		if ((argv[i][0] == '-') && (ft_isdigit(argv[i][1])))
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
			{
				if (check == 1)
					write(1, "Error\n", ft_strlen("Error") + 1);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if ((argv[i][0] != '-' && ft_strlen(argv[i]) > 10) ||
				((argv[i][0] != '-') && ft_strlen(argv[i]) == 10
				 && ft_strcmp(argv[i], "2147483647") > 0))
		{
			write(1, "Error\n", ft_strlen("Error") + 1);
			return (0);
		}
		if ((argv[i][0] == '-' && ft_strlen(argv[i]) > 11) ||
				((argv[i][0] == '-') && ft_strlen(argv[i]) == 11
				 && ft_strcmp(argv[i], "-2147483648") > 0))
		{
			write(1, "Error\n", ft_strlen("Error") + 1);
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_errors(int argc, t_stacks *stack)
{
	int	i;
	int	*table;

	i = 0;
	table = (int *)malloc((stack->len_a) * sizeof(int));
	while (i != stack->len_a)
	{
		if ((i > 0) && (check_dup(table, stack->a[i], i)))
			return (1);
		else
			table[i] = stack->a[i];
		i++;
	}
	free(table);
	stack->offset = argc / 6;
	if (argc > 150)
		stack->offset = argc / 12;
	return (0);
}

void	three_numbers(int *stack_a, t_stacks *stack)
{
	if ((stack_a[2] > stack_a[1]) && (stack_a[1] < stack_a[0])
		&& (stack_a[0] > stack_a[2]))
		sa(stack);
	else if ((stack_a[2] > stack_a[1]) && (stack_a[1] > stack_a[0])
		&& (stack_a[0] < stack_a[2]))
	{
		sa(stack);
		rra(stack);
	}
	else if ((stack_a[2] > stack_a[1]) && (stack_a[1] < stack_a[0])
		&& (stack_a[0] < stack_a[2]))
		ra(stack);
	else if ((stack_a[2] < stack_a[1]) && (stack_a[1] > stack_a[0])
		&& (stack_a[0] > stack_a[2]))
	{
		sa(stack);
		ra(stack);
	}
	else if ((stack_a[2] < stack_a[1]) && (stack_a[1] > stack_a[0])
		&& (stack_a[0] < stack_a[2]))
		rra(stack);
}
