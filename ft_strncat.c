/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:24:59 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/20 15:43:04 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_1;
	unsigned int	count_2;

	count_1 = 0;
	count_2 = 0;
	while (dest[count_1] != '\0')
	{
		count_1++;
	}
	while (count_2 < nb && src[count_2] != '\0')
	{
		dest[count_1] = src[count_2];
		count_1++;
		count_2++;
	}
	dest[count_1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[30] = "You stay classy,";
	char	*s2 = "hkfkqkwte37u";
	char	s3[30] = "You stay classy,";
	char	*s4 = "hkfkqkwte37u";
	ft_strncat(s1, s2, 10);
	printf("%s\n", s1);
	strncat(s3, s4, 10);
	printf("%s\n", s3);
	return (0);
}
*/
