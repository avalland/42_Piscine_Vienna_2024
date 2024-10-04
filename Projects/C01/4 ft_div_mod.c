/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:56:58 by avalland          #+#    #+#             */
/*   Updated: 2024/07/19 19:21:04 by avalland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	c;
	int	d;
	int	e;
	int	f;

	c = 26;
	d = 5;

	ft_div_mod(c, d, &e, &f);
	printf("%d/%d=%d with reminder %d", c, d, e, f);
}
*/
