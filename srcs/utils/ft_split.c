/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanacze <jbanacze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 06:23:09 by jules             #+#    #+#             */
/*   Updated: 2024/02/14 10:14:20 by jbanacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	free_split(char **split_res)
{
	size_t	i;

	i = 0;
	if (!split_res)
		return ;
	while (split_res[i])
		free(split_res[i++]);
	free(split_res);
}

size_t	count_words(char *s, char sep)
{
	size_t	i;
	size_t	nb_words;

	i = 1;
	nb_words = 0;
	if (!s || !s[0])
		return (0);
	if (s[0] != sep)
		nb_words++;
	while (s[i])
	{
		if ((s[i] != sep) && (s[i - 1] == sep))
			nb_words++;
		i++;
	}
	return (nb_words);
}

size_t	copy_until(char *src, char **dest, char sep, int *err_code)
{
	size_t	i;
	size_t	len_to_cpy;

	len_to_cpy = 0;
	while (src[len_to_cpy] != sep)
		len_to_cpy++;
	if (len_to_cpy == 0)
		return (0);
	*dest = malloc(sizeof(char) * (len_to_cpy + 1));
	if (*dest == NULL)
	{
		*err_code = 1;
		return (0);
	}
	i = 0;
	while (i < len_to_cpy)
	{
		(*dest)[i] = src[i];
		i++;
	}
	(*dest)[i] = 0;
	return (i);
}

char	**ft_split(char *s, char sep)
{
	size_t	nb_words;
	size_t	i;
	size_t	index_tab;
	char	**split_res;
	int		err_code;

	nb_words = count_words(s, sep);
	i = 0;
	index_tab = 0;
	err_code = 0;
	split_res = malloc(sizeof(char *) * (nb_words + 1));
	if (!split_res)
		return (NULL);
	while (index_tab < nb_words)
	{
		i += copy_until(s + i, split_res + index_tab, sep, &err_code) + 1;
		if (err_code)
			return (free_split(split_res), NULL);
		if (split_res[index_tab])
			index_tab++;
	}
	return (split_res);
}

size_t	len_split(char **split_res)
{
	size_t	i;

	if (!split_res)
		return (0);
	i = 0;
	
	while (split_res[i])
	{
		i++;
	}
	return (i);
}