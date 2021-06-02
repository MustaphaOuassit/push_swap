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

void    swap_to(int *stack, int *table)
{
    int i;

    i = 0;
    while (i != stack[0])
    {
        stack[i + 1] = table[i];
        i++;
    }
}

void print(int *numbers)
{
    int i;

    i = 1;
    while (i != numbers[0] + 1)
    {
        printf("%d ",numbers[i]);
        i++;
    }
    printf("\n");    
}

void    push_swap(t_stacks stack)
{
    int i;

    i = 3;
    if((stack.a[i - 1] < stack.a[i]) && (stack.a[i - 1] < stack.a[i - 2])
    && (stack.a[i - 2] > stack.a[i]))
        sa(stack.a);
    else if((stack.a[i - 1] < stack.a[i]) && (stack.a[i - 1] > stack.a[i - 2])
    && (stack.a[i - 2] < stack.a[i]))
    {
        sa(stack.a);
        rra(stack.a);
    }
    else if((stack.a[i - 1] < stack.a[i]) && (stack.a[i - 1] < stack.a[i - 2])
    && (stack.a[i - 2] < stack.a[i]))
        ra(stack.a);
    else if((stack.a[i - 1] > stack.a[i]) && (stack.a[i - 1] > stack.a[i - 2])
    && (stack.a[i - 2] > stack.a[i]))
    {
        sa(stack.a);
        ra(stack.a);
    }
    else if((stack.a[i - 1] > stack.a[i]) && (stack.a[i - 1] > stack.a[i - 2])
    && (stack.a[i - 2] < stack.a[i]))
        rra(stack.a);
    print(stack.a);
}