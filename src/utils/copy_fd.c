/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 16:43:53 by aschafer          #+#    #+#             */
/*   Updated: 2017/04/13 08:16:30 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int	copy_fd(int in, int out)
{
	int		ret;
	char	*line;

	line = NULL;
	while ((ret = get_next_line(in, &line)))
	{
		if (ret == -1)
			return (-1);
		ft_putendl_fd(line, out);
	}
	return (0);
}
