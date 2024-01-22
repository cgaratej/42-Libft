/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:41:56 by cgaratej          #+#    #+#             */
/*   Updated: 2024/01/19 14:54:42 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int		ft_isalpha(int c); //C
int		ft_isdigit(int c); //C
int		ft_isalnum(int c); //C
int		ft_isascii(int c); //C
int		ft_isprint(int c); //C
size_t	ft_strlen(const char *str); //C
void	*ft_memset(void *str, int value, size_t len); //C
void	ft_bzero(void *str, size_t n); //C
void	*ft_memcpy(void *dest, const void *src, size_t n); //C
void	*ft_memmove(void *dest, const void *src, size_t n); //C
size_t	ft_strlcpy(char *dest, const char *src, size_t size); //C
size_t	ft_strlcat(char *dest, const char *src, size_t size); //C
int		ft_toupper(int c); //C
int		ft_tolower(int c); //C
char	*ft_strchr(const char *s, int c); //C
char	*ft_strrchr(const char *s, int c); //C
int		ft_strncmp(const char *s1, const char *s2, size_t n); //C
void	*ft_memchr(const void *s, int c, size_t n); //C
int		ft_memcmp(const void *s1, const void *s2, size_t n); //C
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); //C
int		ft_atoi(const char *nptr); //C
void	*ft_calloc(size_t nmemb, size_t size);//C
char	*ft_strdup(const char *s1); //C
char	*ft_substr(char const *s, unsigned int start, size_t len); //C
char	*ft_strjoin(char const *s1, char const *s2); //C
char	*ft_strtrim(char const *s1, char const *set); //f

#endif
