/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/13 14:08:41 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stacks	stack;

	ft_parser(1, argc, argv, &stack);
	ft_init_stack_a(1, argc, argv, &stack);
	test_print(0, &stack);
}

void	test_print(int len, t_stacks *stack)
{
	printf("O tamanho do array é: %i\n", stack->index_a);
	while (stack->index_a > len)
	{
		printf("O argumento na posição %i: %i\n", len, stack->a[len]);
		len++;
	}
}
