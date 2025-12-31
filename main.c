/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/30 22:37:18 by g-alves-         ###   ########.fr       */
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
	//test_print(0, &stack);
	ft_push(stack.a, stack.b, &stack.index_a, &stack.index_b);
	ft_push(stack.a, stack.b, &stack.index_a, &stack.index_b);
	ft_push(stack.a, stack.b, &stack.index_a, &stack.index_b);
	test_print(0, &stack);
	ft_push(stack.b, stack.a, &stack.index_b, &stack.index_a);
	ft_push(stack.b, stack.a, &stack.index_b, &stack.index_a);
	test_print(0, &stack);
	free(stack.a);
	free(stack.b);
}

void	test_print(int len, t_stacks *stack)
{
	printf("\nO tamanho do array é A é: %i\n", stack->index_a);
	printf("O tamanho do array é B é: %i\n\n", stack->index_b);
	while (stack->index_a > len)
	{
		printf("Stack A na posição %i é: %i\n", len, stack->a[len]);
		len++;
	}
	len = 0;
	printf("\n");
	while (stack->index_b > len)
	{
		printf("Stack B na posição %i é: %i\n", len, stack->b[len]);
		len++;
	}
	printf("\nTamanho de stack.a é: %i\n", stack->index_a);
	printf("Tamanho de stack.b é: %i\n\n", stack->index_b);
}
