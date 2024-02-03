/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:59:22 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/25 16:55:26 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n < 1)
	{
		return (0);
	}
	while (*s1 == *s2 && --n && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	*string_1 = "ABBAC";
	char	*string_2 = "ABBAF";
	char	*string_3 = "";
	char	*string_4 = "";
	int	i;
	int	j;
	int	ireal;
	int	jreal;
	int	iempty;
	int	jempty;

	i = ft_strncmp(string_1, string_2, 2);
	j = ft_strncmp(string_2, string_1, 2);
	ireal = strncmp(string_1, string_2, 2);
	jreal = strncmp(string_2, string_1, 2);

	iempty = ft_strncmp(string_3, string_4, 5);
	jempty = strncmp(string_3, string_4, 5);

	printf("string_1 - string_2: %d\n", i);
	printf("string_2 - string_1: %d\n", j);
	printf("string_1 - string_2: %d\n", ireal);
	printf("string_2 - string_1: %d\n", jreal);
	printf("string_1 - string_2: %d\n", iempty);
	printf("string_1 - string_2: %d\n", jempty);
	return (0);
}
