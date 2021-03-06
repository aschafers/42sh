/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_mv_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 02:46:30 by aschafer          #+#    #+#             */
/*   Updated: 2016/11/14 19:26:53 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_command_line.h"

void	cmd_line_mv_left(t_cmd_line *cl)
{
	if (!cl->cursor->prev)
		return ;
	ft_putstr(tgetstr("le", NULL));
	--cl->col;
	--cl->index;
	if (!cl->col)
		cl->col = cl->cols;
	cl->cursor = cl->cursor->prev;
}
