/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:09:51 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/03 17:19:47 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *stack)
{
	int	tmp;

	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
}


void	ft_push(int *origin, int *destiny, int *size_o, int *size_d)
{
	int	tmp;

	tmp = origin[0];
	ft_shift_up(origin, size_o);
	(*size_o)--;
	ft_shift_down(destiny, size_d);
	(*size_d)++;
	destiny[0] = tmp;
}

void	ft_rotate(int *stack, int *size)
{
	int	tmp;

	tmp = stack[0];
	ft_shift_up(stack, size);
	stack[*size -1] = tmp;
}

void	ft_reverse_rotate(int *stack, int *size)
{
	int	tmp;

	tmp = stack[*size -1];
	ft_shift_down(stack, size);
	stack[0] = tmp;
}
