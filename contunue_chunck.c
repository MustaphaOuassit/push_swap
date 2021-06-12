/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contunue_chunck.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:03:47 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 21:02:33 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	contunue_chunck(t_stacks *stack, int t, int i, int count)
{
	t_variables	variable;

	variable.j = 0;
	variable.t = t;
	while (variable.j != stack->len_a)
	{
		if (stack->a[stack->len_a - 1] == variable.t)
		{
			pb(stack);
			count = stack->len_a / 2;
			i = -1;
			break ;
		}
		else
			ft_check_indice(stack, i, count);
		variable.j++;
	}
	return (i);
}

void	ft_push(int argc, char **argv, t_stacks stack)
{
	int	i;

	i = 0;
	if (number(argc, argv, 1) && (check_int(argc, argv)))
	{
		while (i != argc - 1)
		{
			stack.a[(argc - 1) - (i + 1)] = ft_atoi(argv[i + 1]);
			i++;
		}
		if (!check_errors(argc - 1, &stack))
			push_swap(&stack);
		else
			write (1, "Error\n", ft_strlen("Error") + 1);
		free(stack.a);
		free(stack.b);
	}
}
