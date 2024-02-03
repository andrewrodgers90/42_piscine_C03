/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:18:07 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/25 16:43:26 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	j = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	while (dest[i] != '\0')
		i++;
	if (size == 0)
		return (len_src);
	while ((i + j) < (size - 1) && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if (size <= len_dest)
		return (size + len_src);
	dest[i + j] = '\0';
	return (len_dest + len_src);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[28] = "test";
	char	*s2 = "test";
	char	s3[28] = "test";
	char	*s4 = "test";

	printf("%d\n", ft_strlcat(s1, s2, 8));
	printf("%lu\n", strlcat(s3, s4, 8));
	ft_strlcat(s1, s2, 8);
	printf("%s\n", s1);
	strlcat(s3, s4, 8);
	printf("%s\n", s3);
	return (0);
}
