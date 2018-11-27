/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libll.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:43:07 by llelias           #+#    #+#             */
/*   Updated: 2018/11/26 21:45:29 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	*ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memdup(void *p, size_t n);
void	*ft_memjoin(void *b1, void *b2, size_t len1, size_t len2);
size_t	ft_strlen(const char *str);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strdup(const char *str);
char	*ft_strnew(size_t size);
char	*ft_strchr(const char *str, int c);
void	ft_strrev(char *str);
void	ft_swap(char *a, char *b);
#endif
