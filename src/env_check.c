/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:39:18 by aschafer          #+#    #+#             */
/*   Updated: 2016/11/14 17:39:19 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	env_check(t_hash *hash_env, char **store)
{
	char *value;

	if ((value = h_get_value_by_key(hash_env, "HOMEDIR")) == NULL)
		h_set_or_create_elem(hash_env, "HOMEDIR", store[HOMEDIR]);
	ft_memdel((void**)&value);
	if ((value = h_get_value_by_key(hash_env, "LOGNAME")) == NULL)
		h_set_or_create_elem(hash_env, "LOGNAME", store[LOGNAME]);
	ft_memdel((void**)&value);
	if ((value = h_get_value_by_key(hash_env, "OLDPWD")) == NULL)
		h_set_or_create_elem(hash_env, "OLDPWD", store[OLDPWD]);
	ft_memdel((void**)&value);
	if ((value = h_get_value_by_key(hash_env, "PWD")) == NULL)
		h_set_or_create_elem(hash_env, "PWD", store[PWD]);
	ft_memdel((void**)&value);
}
