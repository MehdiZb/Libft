/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzblah <Mehdi.Zblah@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:43:03 by mzblah            #+#    #+#             */
/*   Updated: 2024/09/21 16:20:58 by mzblah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <string.h>
# include <bsd/string.h>


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


	if(ft_strlen(0))
		printf("ft_strlen - incorrect\n");
	if(ft_strlen("A") != 1)
		printf("ft_strlen - incorrect\n");
	if(ft_strlen("A01") != 3)
		printf("ft_strlen - incorrect\n");
	if(ft_strlen(""))
		printf("ft_strlen - incorrect\n");
	printf("ft_strlen - Testing done\n");

	char *str = (char*)malloc(4);
	if (!str)
		return (1);
	str[3] = 0;
	ft_memset(0, 1, 15000000);
	ft_memset(str, 'A', 3);
	if (strcmp("AAA", str))
		printf("ft_memset incorrect - 1\n");
	ft_memset(0, 'A', 3);
	if (strcmp("AAA", str))
		printf("ft_memset incorrect - 2\n");
	ft_memset(str, 0, 3);
	if (strcmp("", str))
		printf("ft_memset incorrect - 3\n");
	free(str);
	printf("ft_memset - Testing done\n");

	str = (char *)malloc(31);
	if (!str)
		return (1);
	ft_memset(str, 'A', 30);
	ft_bzero(str, 31);
	if (strcmp("", str))
		printf("ft_bzero incorrect\n");
	free(str);
	printf("ft_bzero - Testing done\n");
	
	
	
	
	
	str = (char *)malloc(20);
	if (!str)
		return (1);
	for (int i = 0; i < 20; i++)
		str[i] = i + 65;
	str[20] = 0;
	char	*str2 = (char*)strdup(str);
	int tst = strlcpy(str + 18, (const char*)(str + 15), 0);
	int test2 = ft_strlcpy(str2 + 18, (const char*)(str2 + 15), 0);
	if ((tst != test2) || strcmp(str, str2))
		printf("ft_strlcpy INCORRECT, strlcpy = %d ft_strlcpy = %d\n", tst, test2);
	free(str);
	free(str2);

	str = (char *)malloc(20);
	if (!str)
		return (1);
	for (int i = 0; i < 20; i++)
		str[i] = i + 65;
	str[20] = 0;
	str2 = (char*)strdup(str);
	tst = strlcpy(str + 6, (const char*)(str + 8), 5);
	test2 = ft_strlcpy(str2 + 6, (const char*)(str2 + 8), 5);
	if ((tst != test2) || strcmp(str, str2))
		printf("ft_strlcpy incorrect, strlcpy = %d ft_strlcpy = %d\n", tst, test2);
	free(str);
	free(str2);

	str = (char *)malloc(20);
	if (!str)
		return (1);
	for (int i = 0; i < 20; i++)
		str[i] = i + 65;
	str[20] = 0;
	str2 = (char*)strdup(str);
	printf("%s\n", str);
	tst = strlcat(str + 10, (const char*)(str), 19);
	printf("%s\n", str);
	// test2 = ft_strlcpy(str2 + 6, (const char*)(str2 + 8), 5);
	if ((tst != test2) || strcmp(str, str2))
		printf("ft_strlcpy incorrect, strlcpy = %d ft_strlcpy = %d\n", tst, test2);
	free(str);
	free(str2);

	// 	str[0] = '0';
	// str[1] = '1';
	// str[2] = '2';
	// str[3] = '3';
	// str[4] = 0;
	// printf("%s\n", str);
	// memcpy(str, str + 2, 2);
	// printf("%s\n", str);
	// free(str);
	return(0);
}
