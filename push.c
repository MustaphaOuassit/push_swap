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

void    add_numbers(t_stacks stack)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (i != stack.a[0] + 1)
    {
        if(stack.a[stack.a[0]] < stack.a[stack.a[0] - i])
            break;
        i++;
    }
    if(i == stack.a[0])
        ra(stack.a);
    else if((i > 2) && (i < stack.a[0] + 1))
    {
        while (j != i / 2)
        {
            sa(stack.a);
            pb(stack);
            j++;
        }
        sa(stack.a);
        j = 0;
        while (j != i / 2)
        {
            pa(stack);
            j++;
        }
    }
    if(i == 2)
        sa(stack.a);
}

void    push_swap(t_stacks stack)
{
    if(stack.a[0] <= 3)
        three_numbers(stack.a);
    if(stack.a[0] == 5 || stack.a[0] == 4)
        five_numbers(stack);
    print(stack.a);
    print(stack.b);
}