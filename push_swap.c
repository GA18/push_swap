/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:28:53 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/30 22:16:30 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_shift_up(int *stack, int *size)
{
	int	index;
	int	tmp;

	index = 0;
	tmp = stack[0];
	while (index < *size)
	{
		stack[index] = stack[index + 1];
		index++;
	}
	stack[index] = tmp;
	(*size)--;
}

void	ft_shift_down(int *stack, int *size)
{
	int	index;
	int	len;

	index = 1;
	len = *size;
	while (index <= *size)
	{
		stack[len] = stack[len - 1];
		index++;
		len--;
	}
	(*size)++;
}
