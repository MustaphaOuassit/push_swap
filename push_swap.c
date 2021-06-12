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

    stack.a = (int*)malloc((argc - 1)*sizeof(int));
    stack.b = (int*)malloc((argc - 1)*sizeof(int));
    stack.len_a = argc - 1;
    stack.len_b = 0;
    i = 0;
    if(number(argc,argv) && check_int(argc,argv))
    {
        while(i != argc - 1)
        {
            stack.a[(argc - 1) - (i + 1)] = ft_atoi(argv[i + 1]);
            i++;
        }
        if(!check_errors(argc -1,&stack))
            push_swap(&stack);
        else
            write(1,"Error\n",ft_strlen("Error") + 1);
        free(stack.a);
    }
    else
        write(1,"Error\n",ft_strlen("Error") + 1);
    return(0);
}