/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:13:52 by avalland          #+#    #+#             */
/*   Updated: 2024/07/19 19:09:13 by avalland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ssw;

	if (*b != 0)
	{
		ssw = *a;
		*a = *a / *b;
		*b = ssw % *b;
	}
}
/*
int	main(void)
{
	int c;
	int d;
	c = 50;
	d = 9;

	printf("%d/%d", c, d);
	ft_ultimate_div_mod(&c, &d);
	printf("division %d / modulo %d", c, d);
}
*/
