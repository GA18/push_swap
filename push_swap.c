/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:28:53 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/03 17:55:53 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_remove_top(int *stack, int *size)
{
	int	index;

	index = 0;
	while (index < (*size - 1))
	{
		stack[index] = stack[index + 1];
		index++;
	}
}

void	ft_remove_down(int *stack, int *size)
{
	int	index;

	index = *size - 1;
	while (index > 0)
	{
		stack[index] = stack[index - 1];
		index--;
	}
}
