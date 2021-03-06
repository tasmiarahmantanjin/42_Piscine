/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_assigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 12:49:56 by trahman           #+#    #+#             */
/*   Updated: 2020/02/16 17:56:28 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	next_unassigned(int **grid, int *i, int *j)
{
	while (*i <= 8)
	{
		if (*j > 8)
			*j = 0;
		while (*j <= 8)
		{
			if (grid[*i][*j] == 0)
				return (0);
			*j = *j + 1;
		}
		*i = *i + 1;
	}
	return (1);
}
