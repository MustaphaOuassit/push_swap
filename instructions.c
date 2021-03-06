/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:27:45 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 14:34:58 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks *stack)
{
	int	take;

	take = stack->a[stack->len_a - 1];
	stack->a[stack->len_a - 1] = stack->a[stack->len_a - 2];
	stack->a[stack->len_a - 2] = take;
	write(1, "sa\n", ft_strlen("sa") + 1);
}

void	ra(t_stacks *stack)
{
	int	take;
	int	i;
	int	len;

	i = 0;
	len = stack->len_a;
	take = stack->a[0];
	stack->a[0] = stack->a[stack->len_a - 1];
	while (i != stack->len_a - 1)
	{
		stack->a[len - 1] = stack->a[len - 2];
		len--;
		i++;
	}
	stack->a[1] = take;
	write(1, "ra\n", ft_strlen("ra") + 1);
}

void	rb(t_stacks *stack)
{
	int	take;
	int	i;
	int	len;

	i = 0;
	len = stack->len_b;
	take = stack->b[0];
	stack->b[0] = stack->b[stack->len_b - 1];
	while (i != stack->len_b - 1)
	{
		stack->b[len - 1] = stack->b[len - 2];
		len--;
		i++;
	}
	stack->b[1] = take;
	write(1, "rb\n", ft_strlen("rb") + 1);
}

void	rra(t_stacks *stack)
{
	int	take;
	int	i;

	i = 0;
	take = stack->a[stack->len_a - 1];
	stack->a[stack->len_a - 1] = stack->a[0];
	while (i != stack->len_a - 2)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[stack->len_a - 2] = take;
	write(1, "rra\n", ft_strlen("rra") + 1);
}

void	rrb(t_stacks *stack)
{
	int	take;
	int	i;

	i = 0;
	take = stack->b[stack->len_b - 1];
	stack->b[stack->len_b - 1] = stack->b[0];
	while (i != stack->len_b - 2)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[stack->len_b - 2] = take;
	write(1, "rrb\n", ft_strlen("rrb") + 1);
}
