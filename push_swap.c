/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:05:06 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 21:03:07 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stack;
	int			i;

	stack.a = (int *)malloc((argc - 1) * sizeof(int));
	stack.b = (int *)malloc((argc - 1) * sizeof(int));
	stack.len_a = argc - 1;
	stack.len_b = 0;
	i = 0;
	if (argc - 1 > 1)
		ft_push(argc, argv, stack);
	else
	{
		if (!number(argc, argv, 0) || (!check_int(argc, argv)))
			write(1, "Error\n", ft_strlen("Error") + 1);
	}
	return (0);
}
