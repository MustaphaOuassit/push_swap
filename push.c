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

void    fill_table(int *stack, int len, int *table)
{
    int i;

    i = 0;
    while (i != len)
    {
        table[i] = stack[i];
        i++;
    }
}

void     sorting(int *stack, int len, int *table)
{
    int i;
    int j;
    int take;


    i = 0;
    j = 0;
    take = 0;

    fill_table(stack,len,table);
    while (i != len)                     
	{
        j = 0;
		while (j != len)             
		{
			if (table[j] > table[i])                
			{
				take = table[i];         
				table[i] = table[j];
                table[j] = take;
			}
            j++;
		}
        i++;
	}
}

void    push_swap(t_stacks *stack)
{
    int table[stack->len_a];
    
    print(stack->a,stack->len_a);
    sorting(stack->a,stack->len_a,table);
    print(table,stack->len_a);
}