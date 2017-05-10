/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell_update_status.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 04:27:32 by aschafer          #+#    #+#             */
/*   Updated: 2017/04/29 21:35:37 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"
#include "job.h"

void	shell_update_status(t_shell *sh)
{
	int		status;
	int		i;
	pid_t	pid;

	i = 0;
	while ((pid = waitpid(-1, &status, WNOHANG | WUNTRACED)))
	{
		if (pid == -1)
			return ;
		if (pid)
			update_jobs(sh->jobs, pid, status);
	}
}
