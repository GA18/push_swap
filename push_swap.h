/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g-alves- <g-alves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:22:58 by g-alves-          #+#    #+#             */
/*   Updated: 2025/12/13 14:06:41 by g-alves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	index_a;
	int	index_b;
	int	total;
}	t_stacks;

int				main(int argc, char *argv[]);
int				ft_atoi(const char *nptr);
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
int				ft_fill_stack_a(char **string_arg, int index_arg,
					t_stacks *fill_st_a);
void			test_print(int len, t_stacks *stack);

#endif