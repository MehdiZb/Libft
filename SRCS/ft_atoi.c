/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:39:19 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/22 19:47:46 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	cmpt;
	int	neg;

	res = 0;
	cmpt = 0;
	neg = 1;
	if (!str)
		return (0);
	while ((str[cmpt] >= 9 && str[cmpt] <= 13) || str[cmpt] == ' ')
		cmpt++;
	if (str[cmpt] == '+' || str[cmpt] == '-')
		if (str[cmpt] == '-')
			neg = -1;
	while (ft_isdigit(str[cmpt]))
	{
		res = res * 10;
		res = res + (str[cmpt] - 30);
		cmpt++;
	}
	return (res);
}
