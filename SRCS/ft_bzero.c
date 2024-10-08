/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:31:17 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/18 10:10:29 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cmpt;

	cmpt = 0;
	if (!s)
		return;
	while (cmpt < n)
		((char*)s)[cmpt++] = 0;
}
