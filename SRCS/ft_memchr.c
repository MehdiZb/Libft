/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:46:15 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/22 17:51:56 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cmpt;

	cmpt = 0;
	while (cmpt < n)
		if (((unsigned char *)s)[cmpt] == (unsigned char)c)
			return (((void*)s) + cmpt);
	return ((void*)s);
}
