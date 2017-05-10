/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_current_pgid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 13:07:58 by aschafer          #+#    #+#             */
/*   Updated: 2017/04/28 20:07:04 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	set_current_pgid(pid_t pgid)
{
	static t_shell *sh = NULL;

	if (!sh)
		sh = get_shell();
	pgid = (pgid) ? pgid : sh->pid;
	while (tcgetpgrp(sh->save_out) != pgid)
		tcsetpgrp(sh->save_out, pgid);
}
