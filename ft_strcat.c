/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:16:55 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/26 11:03:36 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	count_1;
	int	count_2;

	count_1 = 0;
	count_2 = 0;
	while (dest[count_1] != '\0')
	{
		count_1++;
	}
	while (src[count_2] != '\0')
	{
		dest[count_1] = src[count_2];
		count_1++;
		count_2++;
	}
	dest[count_1] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[20] = "You stay classy,";
	char	*s2 = " San Diego";
	char	s3[20] = "You stay classy,";
	char	*s4 = " San Diego";
	ft_strcat(s1, s2);
	printf("%s\n", s1);
	strcat(s3, s4);
	printf("%s\n", s3);
	return (0);
}
