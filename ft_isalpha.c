/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:09:33 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/16 09:09:33 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int main(int argc, char** argv)
{
	printf("%c\n", (char)atoi(argv[1]));
	printf("%d\n", isalpha(atoi(argv[1])));
	printf("%d\n", ft_isalpha(atoi(argv[1])));
	return(0);
}
