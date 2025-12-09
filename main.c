/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/08 21:17:29 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int			index_arg;
	char		*string;


	index_arg = 1;
	//write(1, split, ft_strlen(split));
	while (*argv[index_arg])
	{
		string = malloc(ft_strlen((argv[index_arg]) + 1) * sizeof(char));
		string = argv[index_arg];
		while (*string)
			ft_get_substring(&string);
		index_arg++;
	}
	//write(1, string, ft_strlen(string));
	// index_arg = 0;
	// while (index_pile--)
	// 	printf("Os argumentos passados são: %i", pile[index_arg++]);
	argc = 0;
	 return (0);
}
