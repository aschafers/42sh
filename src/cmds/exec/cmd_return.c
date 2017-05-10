/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_return.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 17:01:36 by aschafer          #+#    #+#             */
/*   Updated: 2017/05/03 16:06:07 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"
#include "cmd.h"

void	cmd_return(t_cmd *cmd, int ret)
{
	static t_shell *sh = NULL;

	if (!sh)
		sh = get_shell();
	cmd->done = 1;
	cmd->ret = ret;
	sh->cmd_ret = ret;
}
