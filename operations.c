/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:09:51 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/30 22:24:37 by g-alves-         ###   ########.fr       */
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
	ft_shift_down(destiny, size_d);
	destiny[0] = tmp;
}
