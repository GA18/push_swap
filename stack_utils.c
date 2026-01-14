/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:28:53 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/03 23:20:46 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_remove_top(int *stack, int *size)
{
	int	index;

	index = 0;
	while (index < *size - 1)
	{
		stack[index] = stack[index + 1];
		index++;
	}
}

void	ft_remove_down(int *stack, int *size)
{
	int	index;

	index = *size - 1;
	while (index > 0)
	{
		stack[index] = stack[index - 1];
		index--;
	}
}

void	ft_check_duplicate(t_stacks *stack)
{
	int	index;
	int	last_index;

	index = 0;
	last_index = stack->index_a - 1;
	if (last_index < 1)
		return ;
	while (index < last_index)
	{
		if (stack->a[index] == stack->a[last_index])
		{
			free(stack->a);
			ft_msg_error();
		}
		index++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	memory_size;
	void	*allocated_memory;

	memory_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		memory_size = 1;
	if (((nmemb != 0) && (size != 0)) && (memory_size / size) != nmemb)
		return (NULL);
	allocated_memory = malloc(memory_size);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, memory_size);
	return (allocated_memory);
}

void	ft_init_stack_b(t_stacks *stack)
{
	int	index_b;

	index_b = 0;
	stack->b = ft_calloc(stack->index_a, sizeof(int));
	ft_check_alocate(stack->b);
	stack->index_b = stack->index_a;
	while (index_b < stack->index_b)
		stack->b[index_b++] = 0;
	stack->index_b = 0;
}
