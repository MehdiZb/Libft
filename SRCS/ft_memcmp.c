/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:58:27 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/22 19:02:04 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cmpt;

	cmpt = 0;
	while (cmpt < n)
	{
		if (((unsigned char*)s1)[cmpt] != ((unsigned char*)s2)[cmpt])
			return (((unsigned char*)s1)[cmpt] - ((unsigned char*)s2)[cmpt]);
		cmpt++;
	}
	return (0);
}
