/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_terminate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 09:02:51 by aschafer          #+#    #+#             */
/*   Updated: 2017/05/01 18:47:04 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmd.h"
#include "shell.h"
#include <stdio.h>
#include <signal.h>

void		cmd_terminate(t_cmd *cmd, int ret)
{
	cmd->ret = ret;
	while (cmd)
	{
		if (!cmd->done)
		{
			if (cmd->pid)
				kill(cmd->pid, SIGKILL);
		}
		cmd = cmd->children;
	}
}
