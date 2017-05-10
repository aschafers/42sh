/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   job_terminate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 09:04:50 by aschafer          #+#    #+#             */
/*   Updated: 2017/05/03 16:12:18 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "job.h"
#include "shell.h"

void	job_terminate(t_job *job, int ret)
{
	if (get_shell()->is_interactive)
		set_current_pgid(0);
	cmd_terminate(job->current_cmd, ret);
	job->ret = ret;
	job->done = 1;
}
