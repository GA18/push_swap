/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:18:33 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/05 18:29:25 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int			index_arg;
	char		*split;


	index_arg = 1;
	split = argv[index_arg];
	//write(1, split, ft_strlen(split));
	while (split)
	{
		ft_mini_split(&split);
		//write(1, split, ft_strlen(split));
	}
	// index_arg = 0;
	// while (index_pile--)
	// 	printf("Os argumentos passados são: %i", pile[index_arg++]);
	argc = 0;
	 return (0);
}
