/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:09:54 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/16 09:09:54 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cmpt;
	char	*tmp_s;

	if (!s || !n)
		return (s);
	tmp_s = (char *)s;
	cmpt = 0;
	while (cmpt < n)
		tmp_s[cmpt++] = (char)c;
	return (s);
}
