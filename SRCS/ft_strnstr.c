/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:13:42 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/22 19:22:12 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	cmpt;
	
	if (!little || !big)
		return ((char*)big);
	if (little && !little[0])
		return ((char*)big);
	cmpt = 0;
	while (cmpt < len && big[cmpt])
	{
		if (!ft_strncmp(big + cmpt, little, ft_strlen(little)))
			return ((char*)big + cmpt);
		cmpt++;
	}
	return (0);
}
