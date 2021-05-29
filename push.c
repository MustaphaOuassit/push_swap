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

int check_sort(int *numbers, int len_numbers)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(i != len_numbers)
    {
        if((i + 1) <= len_numbers - 1)
        {
            if(numbers[i] < numbers[i + 1])
                j = 1;
            else
            {
                j = 0;
                break;
            }
        }
        i++;
    }
    return(j);
}

void    push_swap(int *stack_a, int *stack_b, int len_numbers)
{
    /*
    numbers =  sa(numbers);
    numbers =  ra(numbers,len_numbers);
    numbers =  rra(numbers,len_numbers);
    int i = 0;
    stack_a =  pa(stack_a, len_numbers);
    write(1,"pa\n",4);
    
    while (i != len_numbers)
    {
        printf("%d ",numbers[i]);
        i++;
    }
    printf("\n");
    if(check_sort(numbers))*/
}