/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:42:01 by ibenmain          #+#    #+#             */
/*   Updated: 2021/12/04 15:46:13 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			signe;
	long int	nb;

	i = 0;
	signe = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		signe = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (signe == -1)
		return (signe * nb);
	else
		return (nb);
}
