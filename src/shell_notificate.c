/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell_notificate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 05:31:23 by aschafer          #+#    #+#             */
/*   Updated: 2017/04/30 18:37:54 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	shell_notificate(t_shell *sh)
{
	t_job *job;
	t_job *next;

	job = sh->jobs;
	while (job)
	{
		next = job->next;
		if (job->done)
		{
			job_notif(job, "terminated");
			shell_remove_a_job(sh, job);
		}
		else if (job->stopped && !job->notified)
		{
			job_notif(job, "stopped");
			job->notified = 1;
		}
		job = next;
	}
}
