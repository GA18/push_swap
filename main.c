/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/05 21:27:12 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stack;

	ft_parser(1, argc, argv, &stack);
	ft_init_stack_a(1, argc, argv, &stack);
	ft_init_stack_b(&stack);
	ft_normalization_stack_a(&stack);
	if (stack.index_a == 2)
		ft_order_two(&stack);
	if (stack.index_a == 3)
		ft_order_three(&stack);
	if (stack.index_a == 4)
		ft_order_for(&stack);
	if (stack.index_a == 5)
		ft_order_five(&stack);
	if (stack.index_a > 5)
		ft_radix_sort(&stack);
	free(stack.a);
	free(stack.b);
}
