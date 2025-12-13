/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/12 22:01:16 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int			index_arg;
	char		*string_arg;
	t_stacks	push_swap;

	index_arg = 1;
	push_swap.total = 0;
	while (index_arg < argc)
	{
		string_arg = argv[index_arg];
		while (*string_arg)
			push_swap.total += ft_valid_numbers(&string_arg);
		index_arg++;
	}
	if (push_swap.total == 0)
		ft_msg_error();
	index_arg = 1;
	push_swap.stack_a = malloc(push_swap.total * sizeof(int));
	ft_check_alocate(push_swap.stack_a);
	while (index_arg < argc)
	{
		string_arg = argv[index_arg++];
		push_swap.size_a = 0;
		while (*string_arg)
			push_swap.size_a += init_stack_a(&string_arg, 0, &push_swap);
	}
}
	// printf("O tamanho do array é: %i\n", push_swap.size_a);
	// while(push_swap.size_a >= 0)
	// {
	// 	printf("O total de argumentos recebidos: %i\n", push_swap.stack_a[push_swap.size_a]);
	// 	push_swap.size_a--;
	// }
	// ESSA M**** TÁ INVERTENDO A ORDEM DOS NUMEROS EM CADA INDICE, PQP!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!