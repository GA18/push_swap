/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:19:19 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/12 09:36:07 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	size_t	index_string;
	int		sign;
	int		number;

	index_string = 0;
	while ((nptr[index_string] == ' ')
		|| ((nptr[index_string] >= 9)
			&& (nptr[index_string] <= 13)))
		index_string++;
	sign = 1;
	if ((nptr[index_string] == '-') || (nptr[index_string] == '+'))
	{
		if (nptr[index_string] == '-')
			sign = -1;
		index_string++;
	}
	number = 0;
	while ((nptr[index_string] >= '0') && (nptr[index_string] <= '9'))
	{
		number = (number * 10) + (nptr[index_string] - '0');
		index_string++;
	}
	return (sign * number);
}

int	ft_check_alocate(void *check_string)
{
	if (!check_string)
		exit(1);
	return (1);
}

void	ft_msg_error(void)
{
	write(1, "Error", 5);
	exit(1);
}

size_t	ft_strlen(const char *l)
{
	size_t	length;

	length = 0;
	while (*l++)
		length++;
	return (length);
}
