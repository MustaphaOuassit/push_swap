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
    int len_numbers;
}           t_stacks;

int g_ln;

size_t ft_strlen(const char *str);
int		ft_atoi(const char *str);
void	ft_remove_element(int *stack, int *table);
int     check_sort(int *numbers, int len_numbers);
void    swap_to(int *stack, int *table);
void    print(int *numbers);
int		ft_size_table(int *table);
void    push_swap(t_stacks stack);
int     sa(int *stack_a);
int     ra(int *stack_a);
int     rra(int *stack_a);
int     pa(int *stack_a, int *stack_b);
#endif