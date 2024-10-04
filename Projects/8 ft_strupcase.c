/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:11:41 by avalland          #+#    #+#             */
/*   Updated: 2024/07/23 17:05:48 by avalland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			(str[i] -= 32);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	t[] = "helkus";
	printf("%s", ft_strupcase(t));
	char	r[] = "AdswAS";
	printf("\n%s", ft_strupcase(r));
	char	y[] = "1sd3.";
	printf("\n%s", ft_strupcase(y));
}
*/
