/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   job_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:52:46 by aschafer          #+#    #+#             */
/*   Updated: 2017/04/30 18:33:04 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "job.h"
#include "libft.h"
#include <stdlib.h>

void	job_free(t_job *job)
{
	if (job->title)
		free(job->title);
	cmd_free(&job->cmds);
	ft_memdel((void **)&job);
}
