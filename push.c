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

int     check_in_chunck(int *table,int start, int end, int stack)
{
    while (start != end + 1)
    {
        if(table[start] == stack)
            return(1);
        start++;
    }
    return(0);
}

void     chuncks(t_stacks *stack,int start, int end, int *table)
{
    int i;
    int count;
    int j;
    int t;

    i = 0;
    j = 0;
    t = 0;
    count = stack->len_a / 2;
    while (i != stack->len_a)
    {
        if (check_in_chunck(table,start,end,stack->a[i]))
        {
            j = 0;
            t = stack->a[i];
            while (j != stack->len_a)
            {
                if(stack->a[0] == t)
                {
                    pb(stack);
                    count = stack->len_a / 2;
                    i = -1;
                    break;
                }
                else
                    {
                        if(i <= count)
                            ra(stack);
                        else
                            rra(stack);
                    }
                j++;
            }
        }
        i++;
    }
}

void    check_in_stack_a(t_stacks *stack, int *table, int len)
{
    int i;
    int j;
    int start;
    int nb = 40;
    int t;

    i = 0;
    j = 1;
    t = 0;
    start = 0;
    while(i != len)
    {  
        t = j - 1;
        if(j == nb)
         {
             if(start > 0)
                start = start + 1;
            chuncks(stack,start,i,table);
            start = i;
            j = 0;
        }
        i++;
        j++;
    }
    if((j < len) && (t > 0))
        chuncks(stack,(len - 1) - t,len - 1,table);
    else
        chuncks(stack,0,len - 1,table);
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
    sorting(stack->a,stack->len_a,table);
    check_in_stack_a(stack,table,stack->len_a);
    print(stack->a,stack->len_a);
    print(stack->b,stack->len_b);
}