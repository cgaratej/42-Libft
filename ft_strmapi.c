/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:52:03 by cgaratej          #+#    #+#             */
/*   Updated: 2024/01/23 18:14:04 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strnew;

	i = 0;
	if (!s || !f)
		return (0);
	strnew = (char *)malloc(ft_strlen(s) + 1);
	if (!strnew)
		return (0);
	while (s[i] != '\0')
	{
		strnew[i] = f(i, s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
