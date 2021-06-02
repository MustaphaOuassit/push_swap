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

void    three_numbers(int *stack)
{
    int i;

    i = 3;
    if((stack[i - 1] < stack[i]) && (stack[i - 1] < stack[i - 2])
    && (stack[i - 2] > stack[i]))
        sa(stack);
    else if((stack[i - 1] < stack[i]) && (stack[i - 1] > stack[i - 2])
    && (stack[i - 2] < stack[i]))
    {
        sa(stack);
        rra(stack);
    }
    else if((stack[i - 1] < stack[i]) && (stack[i - 1] < stack[i - 2])
    && (stack[i - 2] < stack[i]))
        ra(stack);
    else if((stack[i - 1] > stack[i]) && (stack[i - 1] > stack[i - 2])
    && (stack[i - 2] > stack[i]))
    {
        sa(stack);
        ra(stack);
    }
    else if((stack[i - 1] > stack[i]) && (stack[i - 1] > stack[i - 2])
    && (stack[i - 2] < stack[i]))
        rra(stack);
}

void    five_numbers(t_stacks stack)
{
    pb(stack);
    pb(stack);
    three_numbers(stack.a);
    pa(stack);
    add_numbers(stack);
    pa(stack);
    //add_numbers(stack.a);
}