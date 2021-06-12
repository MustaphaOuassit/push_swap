/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:24:17 by mouassit          #+#    #+#             */
/*   Updated: 2021/06/12 20:53:14 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_push_swap
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	int	offset;
}				t_stacks;

typedef struct s_variables
{
	int	i;
	int	count;
	int	j;
	int	t;
	int	r;
	int	m;
	int	indic;
}				t_variables;

size_t			ft_strlen(const char *str);
int				ft_atoi(const char *str);
int				ft_isdigit(char c);
int				ft_strcmp(char *s1, const char *s2);
void			push_swap(t_stacks *stack);
void			three_numbers(int *stack, t_stacks *stk);
void			four_numbers(int *stack_a, t_stacks *stack);
void			five_numbers(int *stack_a, t_stacks *stack);
int				check_errors(int argc, t_stacks *stack);
void			check_in_stack_a(t_stacks *stack, int *table, int len);
void			sorting(int *stack, int len, int *table);
void			fill_table(int *stack, int len, int *table);
void			chuncks(t_stacks *stack, int *table, int len);
int				is_in_table(t_stacks *stack, int nb);
void			sort_b_to_a(t_stacks *stack, int *table);
void			ft_check_indice(t_stacks *stack, int i, int count);
int				toll_chunck(int len, t_stacks *stack);
void			ft_push(int argc, char **argv, t_stacks stack);
void			fill_chunck(t_stacks *stack, int t, int *table, int *take);
void			push_swap(t_stacks *stack);
int				check_in_chunck(int *table, int len, int stack);
int				check_sort(t_stacks *stack);
int				check_sorting(t_stacks *stack);
void			check_indice(t_stacks *stack, int i, int count);
int				number(int argc, char **argv, int check);
void			check_indice_b(t_stacks *stack, int indice, int count);
int				contunue_chunck(t_stacks *stack, int t, int i, int count);
int				check_int(int argc, char **argv);
void			sa(t_stacks *stack);
void			ra(t_stacks *stack);
void			rb(t_stacks *stack);
void			rra(t_stacks *stack);
void			rrb(t_stacks *stack);
void			pb(t_stacks *stack);
void			pa(t_stacks *stack);
#endif
