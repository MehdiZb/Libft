/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:43:03 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/18 09:25:59 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char** argv)
{
	for (int i = -10; i < 255; i++)
	{
		int	res_is = isalpha(i);
		int	res_ft_is = ft_isalpha(i);
		if ((!res_is && res_ft_is) || (res_is && !res_ft_is))
		{
			printf("ft_isalpha mismatch, is_alpha(%d) = %d | ft_isalpha(%d) = %d\n", i, res_is, i, res_ft_is);
			return (1);
		}

		res_is = isdigit(i);
		res_ft_is = ft_isdigit(i);
		if ((!res_is && res_ft_is) || (res_is && !res_ft_is))
		{
			printf("ft_isdigit mismatch, is_alpha(%d) = %d | ft_isdigit(%d) = %d\n", i, res_is, i, res_ft_is);
			return (1);
		}

		res_is = isalnum(i);
		res_ft_is = ft_isalnum(i);
		if ((!res_is && res_ft_is) || (res_is && !res_ft_is))
		{
			printf("ft_isalnum mismatch, is_alpha(%d) = %d | ft_isalnum(%d) = %d\n", i, res_is, i, res_ft_is);
			return (1);
		}

		res_is = isascii(i);
		res_ft_is = ft_isascii(i);
		if ((!res_is && res_ft_is) || (res_is && !res_ft_is))
		{
			printf("ft_isascii mismatch, is_alpha(%d) = %d | ft_isascii(%d) = %d\n", i, res_is, i, res_ft_is);
			return (1);
		}

		res_is = isprint(i);
		res_ft_is = ft_isprint(i);
		if ((!res_is && res_ft_is) || (res_is && !res_ft_is))
		{
			printf("ft_isprint mismatch, is_alpha(%d) = %d | ft_isprint(%d) = %d\n", i, res_is, i, res_ft_is);
			return (1);
		}
	}
	printf("ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint - Testing done\n");

	if(ft_strlen(0) != 0)
		printf("strlen(0) pas correct");
	if(ft_strlen("") != 0)
		printf("strlen(\"\") pas correct");
	if(ft_strlen("12345") != 5)
		printf("strlen(\"\") pas correct");
	printf("ft_strlen - Testing done\n");



	ft_memset(0, 1, 150000);
	char *str = (char*)malloc(4);
	if (!str)
		return (1);
	str[3] = 0;
	// ft_memset(str, 0, 150000); //segfault
	ft_memset(str, 'A', 3);
	printf("%s\n", str);
	ft_memset(str, '0', 0);
	printf("%s\n", str);
	ft_memset(str, '0', 3);
	printf("%s\n", str);
	printf("ft_memset - Testing done\n");
	return(0);
}
