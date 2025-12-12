/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/12 08:41:59 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int			index_arg;
	int			pos_string;
	char		*string_arg;
	t_stacks	stack;

	index_arg = 1;
	pos_string = 0;
	stack.total = 0;
	while (index_arg < argc)
	{
		string_arg = argv[index_arg];
		while (*string_arg)
			stack.total += ft_valid_numbers(&string_arg);
		index_arg++;
		pos_string = 0;
	}
	if (stack.total == 0)
		ft_msg_error();
	printf("O total de argumentos recebidos: %d\n", stack.total);
}
