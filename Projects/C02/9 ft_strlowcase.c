/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:30:09 by avalland          #+#    #+#             */
/*   Updated: 2024/07/23 17:07:37 by avalland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			(str[i] += 32);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s[] = "jjdxA";
	printf ("%s", ft_strlowcase(s));
	char	d[] = "1sD3fS";
	printf ("\n%s", ft_strlowcase(d));
	char	e[] = ".fs3saA";
	printf ("\n%s", ft_strlowcase(e));
}
*/
