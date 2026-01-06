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

void	ft_radix_sort(t_stacks *stack)
{
	int	fix_size;
	int	max_bits;
	int	bit;

	bit = 1;
	max_bits = ft_count_bits(stack);
	while (max_bits-- > 0)
	{
		fix_size = stack->index_a;
		while (fix_size-- > 0)
		{
			if ((stack->a[0] & bit) == 0)
				pb(stack);
			else
				ra(stack);
		}
		while (stack->index_b > 0)
		{
			write(1, "A MERDA TA AQUI, valor:", 30);
			pa(stack);
		}
		bit <<= 1;
	}
	stack->index_b = stack->index_a;
	// while (stack->index_b-- > 0)
	// 	printf("AQUI TEM LIXO NA POS %i, valor: %i", stack->index_b, stack->b[stack->index_b]);

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
