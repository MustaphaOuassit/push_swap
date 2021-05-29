/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:24:17 by mouassit          #+#    #+#             */
/*   Updated: 2021/05/25 11:24:20 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct push_swap
{
    int *a;
    int *b;
}               t_stacks;

int g_ln;

size_t ft_strlen(const char *str);
int		ft_atoi(const char *str);
void    push_swap(t_stacks stack, int len_numbers);
int     *sa(int *stack_a);
int     *ra(int *stack_a, int len_numbers);
int     *rra(int *stack_a, int len_numbers);
int     *pa(int *stack_a, int len_numbers);
#endif