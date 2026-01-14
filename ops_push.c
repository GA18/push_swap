/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:34:48 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/03 23:23:45 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(int *origin, int *destiny, int *size_o, int *size_d)
{
	int	tmp;

	tmp = origin[0];
	ft_remove_top(origin, size_o);
	(*size_o)--;
	(*size_d)++;
	ft_remove_down(destiny, size_d);
	destiny[0] = tmp;
}

int	pa(t_stacks *stack)
{
	if (stack->index_b == 0)
		return (0);
	ft_push(stack->b, stack->a, &stack->index_b, &stack->index_a);
	write(1, "pa\n", 3);
	return (1);
}

int	pb(t_stacks *stack)
{
	if (stack->index_a == 0)
		return (0);
	ft_push(stack->a, stack->b, &stack->index_a, &stack->index_b);
	write(1, "pb\n", 3);
	return (1);
}
