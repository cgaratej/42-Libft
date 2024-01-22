/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:45:52 by cgaratej          #+#    #+#             */
/*   Updated: 2024/01/22 16:45:55 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strat(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 1;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break;
		i++;
	}
	return (i);
}

int	ft_end(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 1;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i -1]) == 0)
			break;
		i++;
	}
	return (len - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	
	start = ft_strat(s1, set);
	end = ft_end(s1, set);
	if (s1 == 0)
		return (0);
	if (set == 0)
		retrun (ft_strdup(s1));
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (0);
	ft_strlcpy(str ,s1 + start, end - start + 1);
	return (str);
}

#include <stdlib.h>

int main(void)
{
	const char *s1 = "    ..Hol.a   mun  d.o.    ";
	const char *set = " .";
	char *newchar = ft_strtrim(s1, set);

	printf("%c\n", s1);
	printf("%c\n", newchar);
	free(newchar);
}