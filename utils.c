/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:19:19 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/29 22:41:46 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *nptr, t_stacks *stack)
{
	size_t	index_str;
	int		sign;
	int		number;

	index_str = 0;
	sign = 1;
	if (nptr[index_str] == '-')
	{
		sign = -1;
		index_str++;
	}
	number = 0;
	while ((nptr[index_str] >= '0') && (nptr[index_str] <= '9'))
	{
		if (number > (INT_MAX / 10) || (number == (INT_MAX / 10)
				&& (nptr[index_str] - '0') > (INT_MAX % 10 + (sign == -1))))
		{
			free(stack->a);
			free(nptr);
			ft_msg_error();
		}
		number = (number * 10) + (nptr[index_str] - '0');
		index_str++;
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
	write(2, "Error\n", 6);
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

void	ft_bzero(void *s, size_t n)
{
	unsigned int	index;
	unsigned char	*casting_void;

	index = 0;
	casting_void = (unsigned char *)s;
	while (index < n)
	{
		casting_void[index] = 0;
		index++;
	}
}
