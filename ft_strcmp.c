/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:44:38 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/19 14:18:08 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*string_1 = "ABBA";
	char	*string_2 = "ABBA";
	int	i;
	int	j;
	int	ireal;
	int	jreal;

	i = ft_strcmp(string_1, string_2);
	j = ft_strcmp(string_2, string_1);
	ireal = strcmp(string_1, string_2);
	jreal = strcmp(string_2, string_1);
	printf("string_1 - string_2: %d\n", i);
	printf("string_2 - string_1: %d\n", j);
	printf("string_1 - string_2: %d\n", ireal);
	printf("string_2 - string_1: %d\n", jreal);
	return (0);
}
*/
