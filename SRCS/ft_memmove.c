/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:38:28 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/21 15:36:35 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str;
	size_t	cmpt;

	str = (char*)malloc(n + 1);
	if (!str)
		return (0);
	ft_bzero(str, n + 1);
	ft_strlcpy(str, src, n);
	cmpt = 0;
	while (cmpt < n)
	{
		((char*)dest)[cmpt] = ((char*)str)[cmpt];
		cmpt++;
	}
	free(str);
	return (dest);
}
