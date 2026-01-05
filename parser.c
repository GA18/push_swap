/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:08:26 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/04 02:50:13 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_parser(int index_arg, int argc, char **argv, t_stacks *stack)
{
	char	*string_arg;

	if (argc < 2)
		exit (1);
	stack->total = 0;
	while (index_arg < argc)
	{
		string_arg = argv[index_arg];
		if (!*string_arg)
			ft_msg_error();
		while (*string_arg)
			stack->total += ft_valid_numbers(&string_arg);
		index_arg++;
	}
	if (stack->total == 0)
		ft_msg_error();
}

void	ft_init_stack_a(int index_arg, int argc, char **argv, t_stacks *stack)
{
	char	*string_arg;

	stack->a = malloc(stack->total * sizeof(int));
	ft_check_alocate(stack->a);
	stack->index_a = 0;
	while (index_arg < argc)
	{
		string_arg = argv[index_arg];
		while (*string_arg)
		{
			stack->index_a += ft_fill_stack_a(&string_arg, 0, stack);
			ft_check_duplicate(stack);
		}
		index_arg++;
	}
	stack->index_b = 0;
}

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

int	ft_fill_stack_a(char **string_arg, int index_arg, t_stacks *fill_st_a)
{
	char		*number;
	int			count_revert_order;

	while ((**string_arg && **string_arg == ' ') || **string_arg == '+')
		(*string_arg)++;
	while ((*string_arg)[index_arg] && (*string_arg)[index_arg] != ' ')
		index_arg++;
	number = malloc((index_arg + 1) * sizeof(char));
	ft_check_alocate(number);
	number[index_arg] = '\0';
	count_revert_order = 0;
	while (index_arg > count_revert_order)
		number[count_revert_order++] = *(*string_arg)++;
	fill_st_a->a[fill_st_a->index_a] = ft_atoi(number, fill_st_a);
	free(number);
	while (**string_arg && **string_arg == ' ')
		(*string_arg)++;
	return (1);
}
