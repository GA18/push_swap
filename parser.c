/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:08:26 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/12 08:31:33 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_valid_numbers(char	**string_arg)
{
	while (**string_arg == ' ')
		(*string_arg)++;
	if (**string_arg == '\0')
		return (0);
	while (**string_arg && **string_arg != ' ')
	{
		if (ft_is_number(string_arg))
			ft_msg_error();
	}
	return (1);
}

int	ft_is_number(char **string_arg)
{
	if (**string_arg == '+' || **string_arg == '-')
	{
		if (*(*string_arg + 1) < '0' || *(*string_arg + 1) > '9')
			ft_msg_error();
		else
			(*string_arg)++;
	}
	while (**string_arg >= '0' && **string_arg <= '9')
		(*string_arg)++;
	if (**string_arg == ' ' || **string_arg == '\0')
		return (0);
	return (1);
}

// char	*ft_get_substring(char **string)
// {
// 	int		possible_number;
// 	int		count_string;
// 	char	*substring;
// 	char	*tmp;

// 	possible_number = 0;
// 	tmp = *string;
// 	while (!((tmp[possible_number] >= '0' && tmp[possible_number] <= '9')
// 			|| tmp[possible_number] == ' '))
// 	{
// 		write(1, "Error", 5);
// 		possible_number++;
// 	}
// 	count_string = 0;
// 	while (tmp[count_string] != ' ')
// 		count_string++;
// 	substring = malloc((count_string + 1) * sizeof(char));
// 	possible_number = 0;
// 	while (tmp[possible_number] != ' ')
// 	{
// 		substring[possible_number] = tmp[possible_number];
// 		possible_number++;
// 		(*string)++;
// 	}
// 	while (tmp[count_string] == ' ')
// 	{
// 		count_string++;
// 		(*string)++;
// 	}
// 	substring[possible_number] = '\0';
// 	write(1, substring, ft_strlen(substring));
// 	return (substring);
// }
