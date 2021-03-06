/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbourgeo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 06:35:39 by gbourgeo          #+#    #+#             */
/*   Updated: 2018/10/30 02:58:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void 				clear_clients(t_cl *cl, int size)
{
	for (int i = 0; i < size; i++) {
		memset(cl + i, 0, sizeof(*cl));
	}
}
