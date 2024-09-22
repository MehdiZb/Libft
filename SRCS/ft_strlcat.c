/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:00:55 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/22 15:47:24 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	cmpt_dest;
	size_t	cmpt;

	if (!dest || !src || !size)
		return (0);
	cmpt_dest = ft_strlen(dest);
	cmpt = 0;
	while (cmpt_dest < size - 1)
		dest[cmpt_dest++] = src[cmpt++];
	dest[cmpt_dest] = 0;
	return (cmpt_dest);
}
