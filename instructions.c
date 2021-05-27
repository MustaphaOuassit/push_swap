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

int *sa(int *numbers)
{
    int i;
    int take;

    i = 0;
    take = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = take;
    return(numbers);
}