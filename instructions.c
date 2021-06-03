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

int sa(int *stack_a)
{
    int take;
    int len_numbers;
    int table[stack_a[0]];

    len_numbers = stack_a[0];
    ft_remove_element(stack_a,table);
    take = table[len_numbers - 2];
    table[len_numbers - 2] = table[len_numbers - 1];
    table[len_numbers - 1] = take;
    swap_to(stack_a, table);
    write(1,"sa\n",ft_strlen("sa") + 1);
    if(check_sort(table,len_numbers))
        return(1);
    return(0);
}

int    ra(int *stack_a)
{
    int len_numbers;
    int table[stack_a[0]];
    int take;
    int i;
    int len;
    
    i = 0;
    len_numbers = stack_a[0];
    ft_remove_element(stack_a,table);
    len = len_numbers;
    take = table[0];
    table[0] = table[len_numbers - 1];
    while (i != len_numbers - 1)
    {
       table[len - 1] = table[len - 2];
        len--;
        i++;
    }
    table[1] = take;
    swap_to(stack_a, table);
    write(1,"ra\n",ft_strlen("ra") + 1);
    if(check_sort(table,len_numbers))
        return(1);
    return(0);
}

int    rra(int *stack_a)
{
        int len_numbers;
    int table[stack_a[0]];
    int take;
    int i;

    i = 0;
    len_numbers = stack_a[0];
    ft_remove_element(stack_a,table);
    take = table[len_numbers - 1];
    table[len_numbers - 1] = table[0];
    while (i != len_numbers - 2)
    {
        table[i] = table[i + 1];
        i++;
    }
    table[len_numbers - 2] = take;
    swap_to(stack_a, table);
    write(1,"rra\n",ft_strlen("rra") + 1);
    if(check_sort(table, len_numbers))
        return(1);
    return(0);
}

int     pa(t_stacks stack)
{
    if(stack.b[0] > 0)
    {
        stack.a[stack.a[0] + 1] = stack.b[stack.b[0]];
        stack.a[0] = stack.a[0] + 1;
        stack.b[0] = stack.b[0] - 1;
        write(1,"pa\n",ft_strlen("pa") + 1);
    }
   return(0); 
}

int     pb(t_stacks stack)
{
    if(stack.a[0] > 0)
    {
        stack.b[stack.b[0] + 1] = stack.a[stack.a[0]];
        stack.b[0] = stack.b[0] + 1;
        stack.a[0] = stack.a[0] - 1;
        write(1,"pb\n",ft_strlen("pb") + 1);
    }
   return(0); 
}