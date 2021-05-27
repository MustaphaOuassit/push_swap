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

