/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarypert <yarypert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 22:13:32 by yarypert          #+#    #+#             */
/*   Updated: 2016/11/18 14:40:56 by yarypert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** convert string to an integer value
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	int signe;
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	signe = ((str[i] == '-') ? -1 : 1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (signe * nb);
}
