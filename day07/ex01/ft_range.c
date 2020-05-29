/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:30:27 by trahman           #+#    #+#             */
/*   Updated: 2020/02/13 16:30:53 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*ret;

	if (min >= max)
	{
		ret = NULL;
		return (ret);
	}
	range = ((max--) - min);
	ret = (int*)malloc(sizeof(*ret) * range);
	i = 0;
	while (i < range)
	{
		ret[i] = min++;
		i++;
	}
	return (ret);
}
