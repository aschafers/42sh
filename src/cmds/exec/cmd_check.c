/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 16:55:07 by aschafer          #+#    #+#             */
/*   Updated: 2017/05/02 16:50:16 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"
#include "cmd.h"

int	cmd_check(t_cmd *cmd)
{
	if (check_access(cmd->args[0], X_OK) == -1)
	{
		cmd_return(cmd, 126);
		return (0);
	}
	return (1);
}
