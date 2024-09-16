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

//#include "ft_libft.h"
 #include <stdlib.h>
 #include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cmpt;
	char	*tmp_s;

	if (!s || !n)
		return (s);
	cmpt = 0;
	while (cmpt < n)
		tmp_s[cmpt++] = (char)c;
	return (s);
}

int		main(int argc, char **argv)
{
	printf("ok ici\n");
	return (0);
}