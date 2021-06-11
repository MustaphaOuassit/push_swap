/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:32:28 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/02 12:32:31 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    three_numbers(int *stack_a, t_stacks *stack)
{
    if((stack_a[2] > stack_a[1]) && (stack_a[1] < stack_a[0]) && (stack_a[0] > stack_a[2]))
        sa(stack);
    else if((stack_a[2] > stack_a[1]) && (stack_a[1] > stack_a[0]) && (stack_a[0] < stack_a[2]))
    {
        sa(stack);
        rra(stack);
    }
    else if((stack_a[2] > stack_a[1]) && (stack_a[1] < stack_a[0]) && (stack_a[0] < stack_a[2]))
        ra(stack);
    else if((stack_a[2] < stack_a[1]) && (stack_a[1] > stack_a[0]) && (stack_a[0] > stack_a[2]))
    {
        sa(stack);
        ra(stack);
    }
    else if((stack_a[2] < stack_a[1]) && (stack_a[1] > stack_a[0]) && (stack_a[0] < stack_a[2]))
        rra(stack);
}