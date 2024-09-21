/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:50:50 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/21 15:34:55 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	cmpt;

	if ((!dest || !src) || !n)
		return (ft_strlen(src));
	cmpt = 0;
	while ((cmpt < n - 1) && src[cmpt])
	{
		dest[cmpt] = src[cmpt];
		cmpt++;
	}
	dest[cmpt] = 0;
	return (ft_strlen(src));
}
