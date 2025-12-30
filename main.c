/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/29 22:31:19 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stack;

	ft_parser(1, argc, argv, &stack);
	ft_init_stack_a(1, argc, argv, &stack);
	stack.b = malloc(stack.index_a * sizeof(int));
	ft_check_alocate(stack.b);
	//ft_controler(&stack);
	//test_print(0, &stack);
	// swap_a(&stack);
	test_print(0, &stack);
	free(stack.a);
	free(stack.b);
}

void	test_print(int len, t_stacks *stack)
{
	printf("O tamanho do array é: %i\n", stack->index_a);
	while (stack->index_a > len)
	{
		printf("O argumento na posição %i: %i\n", len, stack->a[len]);
		len++;
	}
	printf("o tamanho de stack.a é: %i\n", stack->index_a);
	printf("o tamanho de stack.b é: %i\n", stack->index_b);
}
