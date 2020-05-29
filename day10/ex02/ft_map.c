/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 21:48:34 by trahman           #+#    #+#             */
/*   Updated: 2020/02/18 17:58:35 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*str;
	int i;

	i = 0;
	str = (int*)(malloc(sizeof(int) * length + 1));
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}
