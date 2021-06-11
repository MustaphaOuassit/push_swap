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

void    four_numbers(int *stack_a, t_stacks *stack)
{
    int i;
    int j;
    int t;
    int r;

    i = 0;
    j = 0;
    r = 0;
    t = 0;
    while (i != 4)
    {
        j = 0;
        while (j != stack->len_a)
        {
            if(stack_a[i] > stack_a[j])
                break;
            j++;
        }
        if(j == 4)
        {
            r = 0;
            t = stack_a[i];
            while (r != stack->len_a)
            {
                if(stack_a[stack->len_a - 1] == t)
                {
                    pb(stack);
                    break;
                }
                else
                    {
                        if(i < stack->len_a / 2)
                            rra(stack);
                        else
                            ra(stack);
                    }
                r++;
            }
        }       i++;
    }
    three_numbers(stack_a,stack);
    pa(stack);
}