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

int     check_sort(t_stacks *stack)
{
    if(stack->a[0] < stack->a[1])
        return(0);
    return(1);
}

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

int     check_in_chunck(int *table,int len, int stack)
{
    int i;

    i = 0;
    while (i != len)
    {
        if(table[i] == stack)
            return(1);
        i++;
    }
    return(0);
}

void     chuncks(t_stacks *stack, int *table,int len)
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

        if (check_in_chunck(table,len,stack->a[i]))
        {
            j = 0;
            t = stack->a[i];
            while (j != stack->len_a)
            {
                if(stack->a[stack->len_a - 1] == t)
                {
                    pb(stack);
                    count = stack->len_a / 2;
                    i = -1;
                    break;
                }
                else
                    {
                        if(i < count)
                            rra(stack);
                        else
                            ra(stack);
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
    int t;
    int j;
    int m;
    int take[len];
    int r;

    i = 0;
    t = 1;
    j = 0;
    m = 0;
    r = 0;
    while (i != len)
    {
        if(j == 40)
        {
            t++;
            j = 0;
        }
        i++;
        j++;
    }
    i = 0;
    j = 0;
    while (i != t)
    {
        r = 0;
        while (j != len)
        {
            if(m == 40)
            {
                break;
            }
            else
                take[r] = table[j];
            m++;
            j++;
            r++;
        }
        chuncks(stack,take,m);
        m = 0;
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

int is_in_table(t_stacks *stack,int nb)
{
    int i;

    i = 0;
    while (i != stack->len_b)
    {
        if(stack->b[i] == nb)
            break;
        i++;
    }
    return(i);
}

void    sort_b_to_a(t_stacks *stack,int *table)
{
    int i;
    int t;
    int indic;
    int j;
    int count;

    i = 0;
    j = 0;
    indic = 0;
    count = stack->len_b / 2;
    t = stack->len_b;

    while (i != t)
    {
        indic = is_in_table(stack,table[(t - 1) - i]);
        j = 0;
        while (j != t)
        {
            if(stack->b[stack->len_b - 1] == table[(t - 1) - i])
            {
                pa(stack);
                count = stack->len_b / 2;
                break;
            }
            else
            {
                if(indic < count)
                    rrb(stack);
                else
                    rb(stack);
            }
            j++;
        }
        
        i++;
    }
    
}

void    push_swap(t_stacks *stack)
{
    int table[stack->len_a];

    if(stack->len_a == 2)
    {
        if(!check_sort(stack))
            sa(stack);
    }
    if(stack->len_a == 3)
    {
        three_numbers(stack->a,stack);
    }
    if(stack->len_a > 5)
    {
        sorting(stack->a,stack->len_a,table);
        check_in_stack_a(stack,table,stack->len_a);
        sort_b_to_a(stack, table);
    }
    //print(stack->a,stack->len_a);
}