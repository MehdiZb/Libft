/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:32:44 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/18 17:08:46 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cmpt;
	
	if (!dest || !src)
		return (dest);
	cmpt = 0;
	while (cmpt < n)
	{
		((char *)dest)[cmpt] = ((char*)src)[cmpt];
		cmpt++;
	}
	return (dest);
}
