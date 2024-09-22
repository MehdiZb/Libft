/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:29:42 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/22 17:40:53 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cmpt;

	cmpt = 0;
	while (cmpt < n && (s1[cmpt] || s2[cmpt]))
	{
		if (s1[cmpt] != s2[cmpt])
			return (s1[cmpt] - s2[cmpt]);
		cmpt++;
	}
	return (s1[cmpt] - s2[cmpt]);
}
