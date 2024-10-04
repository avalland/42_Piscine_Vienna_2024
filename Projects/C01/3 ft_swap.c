/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:25:45 by avalland          #+#    #+#             */
/*   Updated: 2024/07/20 18:48:19 by avalland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	pwd;

	pwd = *a;
	*a = *b;
	*b = pwd;
}
/*	
int	main(void)
{
	int	c = 222;
	int	d = 666;

	printf("%d, %d\n", c, d);
	swap(&c, &d);
	printf("%d, %d\n", c, d);
}
*/
