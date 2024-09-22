/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:09:26 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/22 17:21:29 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	cmpt;

	if (!str || !c)
		return (0);
	cmpt = (int)ft_strlen(str);
	while (--cmpt > -1)
		if (str[cmpt] == c)
			return ((char*)&str[cmpt]);
	return (0);
}
