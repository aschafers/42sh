/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:16:29 by aschafer          #+#    #+#             */
/*   Updated: 2015/11/29 23:16:58 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *start;

	start = s1;
	s1 += ft_strlen(s1);
	while (*s2)
		*(s1++) = *(s2++);
	*s1 = '\0';
	return (start);
}
