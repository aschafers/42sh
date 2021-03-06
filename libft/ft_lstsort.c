/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 15:51:43 by aschafer          #+#    #+#             */
/*   Updated: 2016/03/20 15:53:08 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static void	swap(void **a, void **b)
{
	void *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int			ft_lstsort(t_list **begin, BOOL (*cmp)(void *a, void *b))
{
	static t_list	*head = NULL;
	t_list			*curr;

	if (!cmp)
		return (1);
	if (!head)
		head = *begin;
	if (!(curr = *begin) || !curr->next)
	{
		head = NULL;
		return (1);
	}
	while (1)
	{
		if (!cmp(curr->content, curr->next->content))
		{
			swap(&curr->content, &curr->next->content);
			if (curr != head)
				return (0);
		}
		if (ft_lstsort(&(curr->next), cmp))
			return (1);
	}
}
