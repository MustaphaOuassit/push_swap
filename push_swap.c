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
    t_stacks stack;
    int i;
    
    stack.a = (int*)malloc((argc)*sizeof(int));
    stack.b = (int*)malloc((argc)*sizeof(int));
    i = 1;
    stack.a[0] = argc - 1;
    stack.b[0] = 0;
    while(i != argc)
    {
        stack.a[i] = ft_atoi(argv[i]);
        i++;
    }
    push_swap(stack);
    free(stack.a);
    return(0);
}