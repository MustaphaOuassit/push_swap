/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_help.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:04:49 by mouassit          #+#    #+#             */
/*   Updated: 2021/05/27 17:04:51 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int		ft_atoi(const char *str)
{
	unsigned long	nb;
	int				is_negatif;

	nb = 0;
	is_negatif = 1;
	while ((*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r') && (*str != '\0'))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		is_negatif = -1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - 48);
		if (nb > 9223372036854775807)
			return ((is_negatif == -1) ? (0) : (-1));
		str++;
	}
	return (nb * is_negatif);
}

int		ft_size_table(int *table)
{
    int size = sizeof *table / sizeof table[0];
	return(size);
}

void		ft_remove_element(int *stack,int *table)
{
	int i;
	i = 0;
	while (i != stack[0])
	{
		table[i] = stack[i + 1];
		i++;
	}
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_strcmp(char *s1, const char *s2)
{
	int x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
		x++;
	return (s1[x] - s2[x]);
}