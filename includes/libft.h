/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 21:05:10 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/01 13:52:52 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>

int			ft_isalpha(int c);
int			ft_atoi(const char *str);
char		*ft_strndup(char *str, int j);
char		**ft_split(char *str, char sep);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
char		*ft_itoa(int nbr);
int			ft_isprint(int c);
char		*ft_strdup(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

#endif
