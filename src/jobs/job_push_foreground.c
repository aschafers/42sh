/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   job_push_foreground.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 09:28:44 by aschafer          #+#    #+#             */
/*   Updated: 2017/04/29 21:56:06 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "job.h"
#include "shell.h"

void	job_push_foreground(t_job *job)
{
	set_current_pgid(job->current_cmd->pid);
	kill(-job->current_cmd->pid, SIGCONT);
	job->stopped = 0;
	job->notified = 0;
	job->current_cmd->background = 0;
	job_wait(job);
	set_current_pgid(0);
}
