/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:39:44 by aschafer          #+#    #+#             */
/*   Updated: 2016/11/14 17:39:52 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	env_init(t_hash **hash_env, char **envp)
{
	if (!(*hash_env = create_hash("env", 300)))
		exit_shell("env hash creation error.", 1);
	if (envp != NULL && *envp != NULL)
	{
		while (*envp)
			h_split_store_elem(*hash_env, *(envp++), '=');
	}
}
