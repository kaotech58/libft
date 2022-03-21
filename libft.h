/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:06:28 by teiffe            #+#    #+#             */
/*   Updated: 2021/11/08 15:12:04 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif
# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

int		ft_atoi(const char *nptr);

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd);

int		ft_memcmp(const void *s1, const void *s2, size_t len);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memchr(const void *s, int c, size_t len);

void	*ft_memset(void *s, int c, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t len);

void	ft_bzero(void *s, size_t len);

void	*ft_calloc(size_t nmemb, size_t size);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strdup(const char *str);

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_itoa(int n);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

int		ft_strncmp(const char *s1, const char *s2, size_t len);
#endif
