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

int check_sort(int *numbers, int len_numbers)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(i != len_numbers)
    {
        if((i + 1) <= len_numbers - 1)
        {
            if(numbers[i] < numbers[i + 1])
                j = 1;
            else
            {
                j = 0;
                break;
            }
        }
        i++;
    }
    return(j);
}

void    push_swap(int *numbers, int len_numbers)
{
    numbers =  sa(numbers);
    write(1,"sa\n",3);

    function counter(currentMount)
    {
        while(i != ele.length)
        {
            if(ele[i].textContent == "May")
            {
                let g = ele[i].querySelector('g');
                console.log(g[i]);
            }
            i++;
        }
    }
    /*printf("%d %d %d\n",numbers[0],numbers[1],numbers[2]);
    if(check_sort(numbers))*/
}