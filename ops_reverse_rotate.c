/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_reverse_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:09:51 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/03 23:34:26 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(int *stack, int *size)
{
	int	tmp;

	tmp = stack[*size -1];
	ft_remove_down(stack, size);
	stack[0] = tmp;
}

int	rra(t_stacks *stack)
{
	if (stack->index_a < 2)
		return (0);
	ft_reverse_rotate(stack->a, &stack->index_a);
	write(1, "rra\n", 4);
	return (1);
}

int	rrb(t_stacks *stack)
{
	if (stack->index_b < 2)
		return (0);
	ft_reverse_rotate(stack->b, &stack->index_b);
	write(1, "rrb\n", 4);
	return (1);
}

int	rrr(t_stacks *stack)
{
	if (stack->index_a < 2 || stack->index_b < 2)
		return (0);
	ft_reverse_rotate(stack->a, &stack->index_a);
	ft_reverse_rotate(stack->b, &stack->index_b);
	write(1, "rrr\n", 4);
	return (1);
}
