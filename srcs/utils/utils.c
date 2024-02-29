/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 04:54:20 by jules             #+#    #+#             */
/*   Updated: 2024/02/29 23:04:02 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	is_sorted(int arr[], size_t len)
{
	size_t	i;

	i = 0;
	while (i < len - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	have_doublons(int arr[], size_t len)
{
	size_t	i;

	i = 0;
	if (!arr || !len)
		return (1);
	while (i < len - 1)
	{
		if (arr[i] == arr[i + 1])
			return (1);
		i++;
	}
	return (0);
}

size_t	find_e(int arr[], size_t len, int e)
{
	size_t	mid;

	mid = len / 2;
	if (arr[mid] > e)
		return (find_e(arr, len / 2, e));
	if (arr[mid] < e)
		return (mid + find_e(arr + mid, len - mid, e));
	return (mid);
}

size_t	ln2(size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n = (n >> 1);
		i++;
	}
	return (i);
}

int	ft_atoi(char *s, int *err_code)
{
	size_t			i;
	int				sign;
	unsigned int	n;

	n = 0;
	sign = 1;
	i = 0;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	if ((s[i] < '0') || ('9' < s[i]))
		*err_code = 1;
	while (s[i] && (('0' <= s[i]) && (s[i] <= '9')))
	{
		n = n * 10 + (s[i] - '0');
		if (n > ((unsigned int) INT_MAX + 1 * (sign == -1)))
			break ;
		i++;
	}
	if (s[i])
		*err_code = 1;
	return (n * sign);
}
