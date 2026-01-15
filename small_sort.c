/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:50:48 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/05 21:48:53 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_two(t_stacks *stack)
{
	if (stack->a[0] > stack->a[1])
		sa(stack);
}

void	ft_order_three(t_stacks *stack)
{
	int	index;

	index = 0;
	while (index < stack->index_a)
	{
		if (stack->a[0] > stack->a[1])
			sa(stack);
		if (stack->a[0] > stack->a[2] || stack->a[1] > stack->a[2])
			rra(stack);
		index++;
	}
}

void	ft_order_for(t_stacks *stack)
{
	int	big;
	int	index;

	big = ft_big_number(stack);
	index = 0;
	while (index < stack->index_a)
	{
		if (big == stack->a[0])
			pb(stack);
		else
			ra(stack);
		index++;
	}
	ft_order_three(stack);
	pa(stack);
	ra(stack);
}

void	ft_order_five(t_stacks *stack)
{
	int	big;
	int	big2;
	int	index;

	big = ft_big_number(stack);
	big2 = big - 1;
	index = 0;
	while (index <= stack->index_a)
	{
		if (big == stack->a[0] || big2 == stack->a[0])
			pb(stack);
		else
			ra(stack);
		index++;
	}
	ft_order_three(stack);
	pa(stack);
	pa(stack);
	if (stack->a[0] > stack->a[1])
		sa(stack);
	ra(stack);
	ra(stack);
}

int	ft_big_number(t_stacks *stack)
{
	int	index;
	int	big;

	index = 0;
	big = stack->a[index];
	while (index < (stack->index_a - 1))
	{
		if (big < stack->a[index + 1])
			big = stack->a[index + 1];
		index++;
	}
	return (big);
}
