/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:35:13 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/03 23:16:37 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(int *stack, int *size)
{
	int	tmp;

	tmp = stack[0];
	ft_remove_top(stack, size);
	stack[*size -1] = tmp;
}

int	ra(t_stacks *stack)
{
	if (stack->index_a < 2)
		return (0);
	ft_rotate(stack->a, &stack->index_a);
	write(1, "ra\n", 3);
	return (1);
}

int	rb(t_stacks *stack)
{
	if (stack->index_b < 2)
		return (0);
	ft_rotate(stack->b, &stack->index_b);
	write(1, "rb\n", 3);
	return (1);
}

int	rr(t_stacks *stack)
{
	if (stack->index_a < 2 || stack->index_b < 2)
		return (0);
	ft_rotate(stack->a, &stack->index_a);
	ft_rotate(stack->b, &stack->index_b);
	write(1, "rr\n", 3);
	return (1);
}
