/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:08:26 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/08 21:24:27 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_get_substring(char **string)
{
	int		possible_number;
	int		count_string;
	char	*substring;
	char	*tmp;

	possible_number = 0;
	tmp = *string;
	while (!((tmp[possible_number] >= '0' && tmp[possible_number] <= '9')
			|| tmp[possible_number] == ' '))
	{
		write(1, "Error", 5);
		possible_number++;
	}
	count_string = 0;
	while (tmp[count_string] != ' ')
		count_string++;
	substring = malloc((count_string + 1) * sizeof(char));
	possible_number = 0;
	while (tmp[possible_number] != ' ')
	{
		substring[possible_number] = tmp[possible_number];
		possible_number++;
	}
	(*string) += possible_number + count_string;
	substring[possible_number] = '\0';
	write(1, substring, ft_strlen(substring));
	return (substring);
}
