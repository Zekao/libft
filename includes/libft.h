/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 21:05:10 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/04 22:03:29 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

void		ft_putstr(char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memset(void *s, int c, size_t n);
char		*ft_strndup(char *str, int j);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char *str, char sep);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_itoa(int nbr);
char		*ft_strnstr(const char *haystack, const char *needle, size_t n);
char		*ft_strdup(char *str);
size_t		ft_strlcpy(char *dest, char *src, size_t size);
size_t		ft_strlen(char *str);
size_t		ft_strlcat(char *dest, char *src, size_t size);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_isalpha(int c);
int			ft_atoi(const char *str);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);	
int			ft_isalnum(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_isprint(int c);
#endif
