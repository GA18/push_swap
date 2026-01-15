/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:22:58 by g-alves-          #+#    #+#             */
/*   Updated: 2026/01/05 20:05:12 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	index_a;
	int	index_b;
	int	total;
}	t_stacks;

int				ft_atoi(char *nptr, t_stacks *stack);
int				ft_check_alocate(void	*check_string);
size_t			ft_strlen(const char *l);
char			*ft_get_substring(char **string);
int				ft_valid_numbers(char	**string_arg);
int				ft_is_number(char **string_arg);
void			ft_msg_error(void);
void			ft_parser(int index_arg, int argc, char **argv,
					t_stacks *stack);
void			ft_init_stack_a(int index_arg, int argc, char **argv,
					t_stacks *stack);
void			ft_init_stack_b(t_stacks *stack);
int				ft_fill_stack_a(char **string_arg, int index_arg,
					t_stacks *fill_st_a);
void			ft_check_duplicate(t_stacks *fill_st_a);
void			ft_swap(int *stack);
void			ft_push(int *origin, int *destiny, int *size_o, int *size_d);
void			ft_rotate(int *stack, int *size);
void			ft_reverse_rotate(int *stack, int *size);
void			ft_remove_top(int *stack, int *size);
void			ft_remove_down(int *stack, int *size);
int				sa(t_stacks *stack);
int				sb(t_stacks *stack);
int				ss(t_stacks *stack);
int				pa(t_stacks *stack);
int				pb(t_stacks *stack);
int				ra(t_stacks *stack);
int				rb(t_stacks *stack);
int				rr(t_stacks *stack);
int				rra(t_stacks *stack);
int				rrb(t_stacks *stack);
int				rrr(t_stacks *stack);
void			ft_normalization_stack_a(t_stacks *stack);
void			ft_sorted_copy(t_stacks *stack, int *copy);
void			ft_fill_copy(t_stacks *stack, int *copy, int index_scan);
void			ft_radix_sort(t_stacks *stack);
int				ft_count_bits(t_stacks *stack);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			ft_is_order(t_stacks *stack, int *copy, int count);
void			ft_order_three(t_stacks *stack);
void			ft_order_for(t_stacks *stack);
void			ft_order_five(t_stacks *stack);
int				ft_big_number(t_stacks *stack);
void			ft_order_two(t_stacks *stack);

#endif