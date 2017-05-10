/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:42:24 by aschafer          #+#    #+#             */
/*   Updated: 2017/04/30 18:59:07 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

int			main(int ac, char **av, char **env)
{
	t_shell *sh;

	shell_init((sh = get_shell()), env);
	shell_start(sh, ac, av);
	return (0);
}
