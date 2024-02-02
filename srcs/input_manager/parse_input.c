/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 06:16:29 by jules             #+#    #+#             */
/*   Updated: 2024/01/26 01:52:20 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input_manager.h"


int	*get_arr(char **s, size_t *len)
{
	int		*arr;
	size_t	i;
	int		err_code;

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

t_ps	initialize_ps(int argc, char **argv)
{
	size_t	len;
	t_ps	p;
	int		malloced_args;
	char	**args;
	
	if (argc == 1)
		exit(EXIT_FAILURE);
	args = NULL;
	malloced_args = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		malloced_args = 1;
	}
	else
		args = argv + 1;
	if (!args)
		return (NULL);
	
	if (malloced_args)
		free_split(args);
	return (ps);
}