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

int check_sort(int *numbers)
{
    int i;

    i = 0;
    while(i != 3)
    {
        if(((i + 1) < 3) && (numbers[i] < numbers[i + 1]))
            i = 1;
        else
        {
            i = 0;
            break;
        }
        i++;
    }
    return(i);
}

void    push_swap(int *numbers)
{
    numbers =  sa(numbers);
    printf("%d %d %d\n",numbers[0],numbers[1],numbers[2]);
    if(check_sort(numbers))
        write(1,"sa\n",3);
}