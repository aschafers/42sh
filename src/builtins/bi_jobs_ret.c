/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_jobs_ret.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 17:07:18 by aschafer          #+#    #+#             */
/*   Updated: 2017/05/01 17:07:20 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void		bi_jobs_ret(char *id, t_job *cur)
{
	print_hooks(id);
	print_hooks(cur->current_cmd->args[0]);
	if (cur->done)
		print_hooks("terminated");
	else
		print_hooks((cur->stopped) ? "stopped" : "running...");
	ft_putchar('\n');
}
