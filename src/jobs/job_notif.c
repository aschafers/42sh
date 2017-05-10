/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   job_notif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 06:37:08 by aschafer          #+#    #+#             */
/*   Updated: 2017/04/30 18:34:05 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	job_notif(t_job *job, char *status)
{
	char *str;

	if (!(str = ft_itoa(job->id)))
		exit_shell(ERR_MALLOC, 1);
	print_hooks(str);
	print_hooks(status);
	ft_putchar('\n');
	free(str);
}
