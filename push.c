/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:29:04 by mouassit          #+#    #+#             */
/*   Updated: 2021/05/27 18:29:07 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print(int *numbers,int len)
{
    int i;

    i = 0;
    while (i != len)
    {
        printf("%d ",numbers[i]);
        i++;
    }
    printf("\n");    
}

void    push_swap(t_stacks *stack)
{
    pb(stack);
    print(stack->a,stack->len_a);
    print(stack->b,stack->len_b);
    pb(stack);
    print(stack->a,stack->len_a);
    print(stack->b,stack->len_b);
    pa(stack);
    print(stack->a,stack->len_a);
    print(stack->b,stack->len_b);
}