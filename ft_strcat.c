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

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count_1;
	int	count_2;

	count_1 = 0;
	count_2 = 0;
	while (dest[count_1] != '\0')
		count_1++;
	while (src[count_2] != '\0')
	{
		dest[count_1] = src[count_2];
		count_1++;
		count_2++;
	}
	dest[count_1] = '\0';
	return (dest);
}
