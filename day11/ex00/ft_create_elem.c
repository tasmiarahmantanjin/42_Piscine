/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:48:28 by trahman           #+#    #+#             */
/*   Updated: 2020/02/19 17:55:45 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_LIST_H"

t_lsit	*ft_create_elem(void *data)
{
		t_list	*l;
		l = (t_list*)(malloc(sizeof(t_list));
		(*l) .data = data;
		(*l) .next = NULL;
		return (l);
}
