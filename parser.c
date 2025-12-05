/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:08:26 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/05 18:30:34 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_mini_split(char **string)
{
	int		index_possible_number;
	char	*array_for_string;

	index_possible_number = 0;
	array_for_string = malloc(9 * sizeof(char));
	ft_check_alocate(array_for_string);
	while ((**string && ((**string >= '0' && **string <= '9')
				|| **string == ' ' || **string == '-' || **string == '+')))
	{
		while (**string != ' ')
		{
			array_for_string[index_possible_number++] = **string;
			string++;
		}
		if (**string == ' ')
		{
			array_for_string[index_possible_number] = '\0';
			write (1, array_for_string, ft_strlen(array_for_string));
			return (array_for_string);
		}
		string++;
	}
	write(1, "Error", 5);
	return (NULL);
}
