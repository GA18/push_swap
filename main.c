/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/02 19:07:48 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	static int	*pile;
	int			index_pile;
	int			index_arg;

	index_pile = 0;
	index_arg = 1;
	pile = malloc(argc * sizeof(int *));
	ft_check_alocate(pile);
	while (index_arg < argc++)
		ft_atoi(argv); // ficar chamando atoi a cada NUMERO encontrado e converter
		//de string pra numero, ao retornar atribuir a posição atual de pile.
		//Lembrar que os numeros estarão todos em uma unica string, será necessario
		//um metodo para identificar e separar todos eles uns dos ouros
	index_arg = 0;
	while (index_pile--)
		printf("Os argumentos passados são: %i", pile[index_arg++]);
	return (0);
}
