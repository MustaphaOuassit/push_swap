/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:27:45 by mouassit          #+#    #+#             */
/*   Updated: 2021/05/27 17:27:47 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *sa(int *stack_a)
{
    int take;

    take = stack_a[0];
    stack_a[0] = stack_a[1];
    stack_a[1] = take;
    return(stack_a);
}

int *ra(int *stack_a, int len_numbers)
{
    int take;
    int i;

    i = 0;
    take = stack_a[len_numbers - 1];
    stack_a[len_numbers - 1] = stack_a[0];
    while (i != len_numbers - 2)
    {
        stack_a[i] = stack_a[i + 1];
        i++;
    }
    stack_a[len_numbers - 2] = take;
    return(stack_a);
}

int    *rra(int *stack_a, int len_numbers)
{
    int take;
    int i;
    int len = len_numbers;

    i = 0;
    take = stack_a[0];
    stack_a[0] = stack_a[len_numbers - 1];
    while (i != len_numbers - 1)
    {
        stack_a[len - 1] = stack_a[len - 2];
        len--;
        i++;
    }
    stack_a[1] = take;
    return(stack_a);
}
/*
int *pa(int *numbers, int len_numbers)
{
    
}*/