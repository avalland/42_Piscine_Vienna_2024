/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:03:45 by avalland          #+#    #+#             */
/*   Updated: 2024/07/23 19:41:23 by avalland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		(dest[i] = src[i]);
		i++;
	}
	while (i < n)
	{
		(dest[i] = '\0');
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[] = "destination";
	char src[] = "sourseeeeeeee";
	printf("%s", ft_strncpy(dest, src, 5));
}
*/
