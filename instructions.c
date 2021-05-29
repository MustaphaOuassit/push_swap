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

int *sa(int *numbers)
{
    int take;

    take = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = take;
    return(numbers);
}

int *ra(int *numbers, int len_numbers)
{
    int take;
    int i;

    i = 0;
    take = numbers[len_numbers - 1];
    numbers[len_numbers - 1] = numbers[0];
    while (i != len_numbers - 2)
    {
        numbers[i] = numbers[i + 1];
        i++;
    }
    numbers[len_numbers - 2] = take;
    return(numbers);
}

int    *rra(int *numbers, int len_numbers)
{
    int take;
    int i;
    int len = len_numbers;

    i = 0;
    take = numbers[0];
    numbers[0] = numbers[len_numbers - 1];
    while (i != len_numbers - 1)
    {
        numbers[len - 1] = numbers[len - 2];
        len--;
        i++;
    }
    numbers[1] = take;
    return(numbers);
}

int *pa(int *numbers, int len_numbers)
{
    int *stack_a;

    stack_a = (int*)malloc((len_numbers)*sizeof(int));
    stack_a[0] = numbers[len_numbers - 1];
    return(stack_a);
}