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
    int *numbers;
    int i;

    numbers = (int*)malloc((argc - 1)*sizeof(int));
    i = 0;
    while(i != argc - 1)
    {
        numbers[i] = ft_atoi(argv[i + 1]);
        i++;
    }
    push_swap(numbers,argc - 1);
    return(0);
}