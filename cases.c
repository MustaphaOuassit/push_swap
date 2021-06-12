/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:32:28 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/02 12:32:31 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int     check_dup(int *table, int stack, int len)
{
    int i;

    i = 0;
    while (i != len)
    {
        if (table[i] == stack)
            return(1);
        i++;
    }
    
    return(0);
}

int 	number(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		if ((argv[i][0] == '-') && ft_isdigit(argv[i][1]))
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
                return(0);
			j++;
		}
		i++;
	}
    return(1);
}

int	check_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if ((argv[i][0] != '-' && ft_strlen(argv[i]) > 10) ||
		((argv[i][0] != '-') && ft_strlen(argv[i]) == 10
		&& ft_strcmp(argv[i], "2147483647") > 0))
            return(0);
		if ((argv[i][0] == '-' && ft_strlen(argv[i]) > 11) ||
		 ((argv[i][0] == '-') && ft_strlen(argv[i]) == 11
		&& ft_strcmp(argv[i], "-2147483648") > 0))
            return(0);
		i++;
	}
    return(1);
}

int     check_errors(int argc, t_stacks *stack)
{
    int i;
    int table[stack->len_a];

    i = 0;
    if(argc == 1)
        return(1);
    while (i != stack->len_a)
    {
        if((i > 0) && (check_dup(table,stack->a[i],i)))
            return(1);
        else
            table[i] = stack->a[i];
        i++;
    }
    return(0);
}

void    three_numbers(int *stack_a, t_stacks *stack)
{
    if((stack_a[2] > stack_a[1]) && (stack_a[1] < stack_a[0]) && (stack_a[0] > stack_a[2]))
        sa(stack);
    else if((stack_a[2] > stack_a[1]) && (stack_a[1] > stack_a[0]) && (stack_a[0] < stack_a[2]))
    {
        sa(stack);
        rra(stack);
    }
    else if((stack_a[2] > stack_a[1]) && (stack_a[1] < stack_a[0]) && (stack_a[0] < stack_a[2]))
        ra(stack);
    else if((stack_a[2] < stack_a[1]) && (stack_a[1] > stack_a[0]) && (stack_a[0] > stack_a[2]))
    {
        sa(stack);
        ra(stack);
    }
    else if((stack_a[2] < stack_a[1]) && (stack_a[1] > stack_a[0]) && (stack_a[0] < stack_a[2]))
        rra(stack);
}

void    four_numbers(int *stack_a, t_stacks *stack)
{
    int i;
    int j;
    int t;
    int r;

    i = 0;
    j = 0;
    r = 0;
    t = 0;
    while (i != 4)
    {
        j = 0;
        while (j != stack->len_a)
        {
            if(stack_a[i] > stack_a[j])
                break;
            j++;
        }
        if(j == 4)
        {
            r = 0;
            t = stack_a[i];
            while (r != stack->len_a)
            {
                if(stack_a[stack->len_a - 1] == t)
                {
                    pb(stack);
                    break;
                }
                else
                    {
                        if(i < stack->len_a / 2)
                            rra(stack);
                        else
                            ra(stack);
                    }
                r++;
            }
        }       i++;
    }
    three_numbers(stack_a,stack);
    pa(stack);
}

void    five_numbers(int *stack_a, t_stacks *stack)
{
    int i;
    int j;
    int t;
    int r;

    i = 0;
    j = 0;
    r = 0;
    t = 0;
    while (i != 5)
    {
        j = 0;
        while (j != stack->len_a)
        {
            if(stack_a[i] > stack_a[j])
                break;
            j++;
        }
        if(j == 5)
        {
            r = 0;
            t = stack_a[i];
            while (r != stack->len_a)
            {
                if(stack_a[stack->len_a - 1] == t)
                {
                    pb(stack);
                    break;
                }
                else
                    {
                        if(i < stack->len_a / 2)
                            rra(stack);
                        else
                            ra(stack);
                    }
                r++;
            }
        }       i++;
    }
    four_numbers(stack_a,stack);
    pa(stack);
}