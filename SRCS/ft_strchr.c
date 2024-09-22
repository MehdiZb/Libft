/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:04:57 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/22 17:21:11 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	cmpt;

	if (!str || !c)
		return (0);
	cmpt = -1;
	while (++cmpt < (int)ft_strlen(str))
		if (str[cmpt] == c)
			return ((char*)(&(str[cmpt])));
	return (0);
}
