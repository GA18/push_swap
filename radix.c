/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:50:48 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/05 18:50:40 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_sort(t_stacks *stack)
{
	int	index_current;
	int	max_bits;

	max_bits = ft_count_bits(stack);
	while (max_bits > 0)
	{
		index_current = 0;
		while (index_current < stack->index_a)
		{
			if ((stack->a[0] & 1) == 0)
				pb(stack);
			else
				ra(stack);
			index_current++;
		}
		index_current = 0;
		while (index_current <= stack->index_b)
		{
			pa(stack);
			index_current++;
		}
		ft_shift_bits(stack);
		max_bits--;
	}
}

int	ft_count_bits(t_stacks *stack)
{
	int	big_index;
	int	count_bits;

	count_bits = 0;
	big_index = stack->index_a - 1;
	while (big_index > 0)
	{
		count_bits++;
		big_index >>= 1;
	}
	return (count_bits);
}

void	ft_shift_bits(t_stacks *stack)
{
	int	index_current;

	index_current = 0;
	while (index_current < stack->index_a)
	{
		stack->a[index_current] >>= 1;
		index_current++;
	}
}
