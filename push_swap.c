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

    g_ln = argc - 1;
    stack.a = (int*)malloc((argc - 1)*sizeof(int));
    stack.b = (int*)malloc((argc - 1)*sizeof(int));
    i = 0;
    while(i != argc - 1)
    {
        stack.a[i] = ft_atoi(argv[i + 1]);
        i++;
    }
    push_swap(stack,argc - 1);
    free(stack.a);
    return(0);
}