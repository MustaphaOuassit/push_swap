/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:05:06 by mouassit          #+#    #+#             */
/*   Updated: 2021/05/25 11:05:09 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc,char **argv)
{
    int *stack_a;
    int *stack_b;
    int i;

    stack_a = (int*)malloc((argc - 1)*sizeof(int));
    stack_b = (int*)malloc((argc - 1)*sizeof(int));
    i = 0;
    while(i != argc - 1)
    {
        stack_a[i] = ft_atoi(argv[i + 1]);
        i++;
    }
    push_swap(stack_a,stack_b,argc - 1);
    free(stack_a);
    return(0);
}