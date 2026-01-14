/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:00:15 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/05 16:05:09 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_normalization_stack_a(t_stacks *stack)
{
	int	*copy;
	int	index_current;
	int	index_scan;

	index_current = 0;
	copy = ft_calloc(stack->total, sizeof(int));
	ft_check_alocate(copy);
	ft_fill_copy(stack, copy, index_current);
	ft_sorted_copy(stack, copy);
	while (index_current < stack->index_a)
	{
		index_scan = 0;
		while (index_scan < stack->index_a)
		{
			if (stack->a[index_current] == copy[index_scan])
			{
				stack->a[index_current] = index_scan;
				index_scan = stack->index_a;
			}
			index_scan++;
		}
		index_current++;
	}
	free(copy);
}

void	ft_fill_copy(t_stacks *stack, int *copy, int index_scan)
{
	while (index_scan < stack->index_a)
	{
		copy[index_scan] = stack->a[index_scan];
		index_scan++;
	}
}

void	ft_sorted_copy(t_stacks *stack, int *copy)
{
	int	index_current;
	int	index_scan;
	int	tmp;
	int	count;

	index_current = 0;
	count = 0;
	while (index_current < stack->index_a)
	{
		index_scan = index_current + 1;
		while (index_scan < stack->index_a)
		{
			if (copy[index_scan] < copy[index_current])
			{
				tmp = copy[index_scan];
				copy[index_scan] = copy[index_current];
				copy[index_current] = tmp;
				count++;
			}
			index_scan++;
		}
		index_current++;
	}
	ft_is_order(stack, copy, count);
}

void	ft_is_order(t_stacks *stack, int *copy, int count)
{
	if (count == 0)
	{
		free(stack->a);
		free(stack->b);
		free(copy);
		exit(1);
	}
}
