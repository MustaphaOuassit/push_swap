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
    int j;

    i = 0;
    j = 1;
    take = numbers[len_numbers - 1];
    while (i != len_numbers)
    {
        if(i == 0)
            numbers[len_numbers - (i + 1)] = numbers[i];
        i++;
    }
    i = 0;
    while (i != len_numbers - 2)
    {
        numbers[i] = numbers[len_numbers - (len_numbers - j)];
        i++;
        j++;
    }
    numbers[len_numbers - 2] = take;
    return(numbers);
}

int    *rra(int *numbers, int len_numbers)
{
    int take;
    int i;
    int j;

    i = 0;
    j = 1;
    take = numbers[len_numbers - 1];
    numbers[len_numbers - 1] = numbers[0];
    while (i != len_numbers - 2)
    {
        numbers[i] = numbers[len_numbers - (len_numbers - j)];
        i++;
        j++;
    }
    numbers[len_numbers - 2] = take;
    return(numbers);
}