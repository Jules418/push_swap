/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 06:16:29 by jules             #+#    #+#             */
/*   Updated: 2024/03/07 00:38:51 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input_manager.h"

int	*get_arr(char **s, size_t len)
{
	int		*arr;
	size_t	i;
	int		err_code;

	if (!len || !s)
		return (NULL);
	err_code = 0;
	arr = malloc(sizeof(int) * len);
	i = 0;
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = ft_atoi(s[i], &err_code);
		i++;
	}
	if (err_code)
		return (free(arr), NULL);
	return (arr);
}

void	fill_stack(t_deque a, int arr[], size_t len)
{
	size_t	i;
	int		*cpy;

	i = 0;
	cpy = ft_copy_arr(arr, len);
	if (!arr || !cpy)
		return ;
	quick_sort(arr, len);
	while (i < len)
	{
		push_back(a, new_node(find_e(arr, len, cpy[i])));
		i++;
	}
	free(cpy);
}

t_ps	init_unique_arg(char args[])
{
	char	**split_arg;
	size_t	len;
	t_ps	p;

	p = new_ps();
	if (!p)
		return (NULL);
	split_arg = ft_split(args, ' ');
	len = len_split(split_arg);
	p->sorted_arr = get_arr(split_arg, len);
	p->len = len * (p->sorted_arr != NULL);
	fill_stack(p->a, p->sorted_arr, p->len);
	free_split(split_arg);
	if ((p->a->size != p->len) || (have_duplicates(p->sorted_arr, p->len)))
		return (free_ps(p), NULL);
	return (p);
}

t_ps	initialize_ps(int argc, char **argv)
{
	t_ps	p;

	if (argc == 1)
		exit(EXIT_FAILURE);
	if (argc == 2)
		return (init_unique_arg(argv[1]));
	p = new_ps();
	if (!p)
		return (NULL);
	p->sorted_arr = get_arr(argv + 1, argc - 1);
	p->len = (argc - 1) * (p->sorted_arr != NULL);
	fill_stack(p->a, p->sorted_arr, p->len);
	if ((p->a->size != p->len) || (have_duplicates(p->sorted_arr, p->len)))
		return (free_ps(p), NULL);
	return (p);
}
