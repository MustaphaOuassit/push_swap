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
    int len_a;
    int len_b;
}           t_stacks;
int g_len;
size_t ft_strlen(const char *str);
int		ft_atoi(const char *str);
void    print(int *numbers,int len);
void    push_swap(t_stacks *stack);
void    three_numbers(int *stack,t_stacks *stk);
void    four_numbers(int *stack_a, t_stacks *stack);
void     sa(t_stacks *stack);
void     ra(t_stacks *stack);
void     rb(t_stacks *stack);
void     rra(t_stacks *stack);
void     rrb(t_stacks *stack);
void     pb(t_stacks *stack);
void     pa(t_stacks *stack);
#endif