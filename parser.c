/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:08:26 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/12 21:56:12 by g-alves-         ###   ########.fr       */
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

int	init_stack_a(char **string_arg, int index_arg, t_stacks *fill_st_a)
{
	char		*number;

	while ((*string_arg)[index_arg] && (*string_arg)[index_arg] != ' ')
		index_arg++;
	number = malloc((index_arg + 1) * sizeof(char));
	ft_check_alocate(number);
	number[index_arg] = '\0';
	while (index_arg--)
		number[index_arg] = *(*string_arg)++;
	fill_st_a->stack_a[fill_st_a->size_a] = ft_atoi(number);
	free(number);
	while (**string_arg && **string_arg == ' ')
		(*string_arg)++;
	if(!(**string_arg))
		return(0);
	return (1);
}
