/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdecade.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:16:26 by aschafer          #+#    #+#             */
/*   Updated: 2017/02/17 14:51:43 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getdecade(int nbr)
{
	int size;

	size = 0;
	while (nbr != 0)
	{
		size++;
		nbr = nbr / 10;
	}
	return (size);
}
