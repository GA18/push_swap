/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:22:08 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/03 23:16:26 by g-alves-         ###   ########.fr       */
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

int	sa(t_stacks *stack)
{
	if (stack->index_a < 2)
		return (0);
	ft_swap(stack->a);
	write(1, "sa\n", 3);
	return (1);
}

int	sb(t_stacks *stack)
{
	if (stack->index_b < 2)
		return (0);
	ft_swap(stack->b);
	write(1, "sb\n", 3);
	return (1);
}

int	ss(t_stacks *stack)
{
	if (stack->index_a < 2 || stack->index_a < 2)
		return (0);
	ft_swap(stack->a);
	ft_swap(stack->b);
	write(1, "ss\n", 3);
	return (1);
}
