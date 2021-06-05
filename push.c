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

int *reverse(int *stack, int len)
{
    int i;
    int take;

    take = 0;
    i = 0;
    stack[0] = stack[len - 1];
    return(stack);
}

int     *sorting(int *stack, int len)
{
    int i;
    int j;
    int take;


    i = 0;
    j = 0;
    take = 0;

    while (i != len)                     
	{
        j = 0;
		while (j != len)             
		{
			if (stack[j] < stack[i])                
			{
				take = stack[i];         
				stack[i] = stack[j];            			
                stack[j] = take;
			}
            j++;
		}
        i++;
	}
    reverse(stack,len);
    return(stack);
}

void    push_swap(t_stacks *stack)
{
    int *sort;

    sort = (int*)malloc((stack->len_a)*sizeof(int));
    print(stack->a,stack->len_a);
    sort = sorting(stack->a,stack->len_a);
    print(sort,stack->len_a);
}