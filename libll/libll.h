/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libll.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:43:07 by llelias           #+#    #+#             */
/*   Updated: 2018/11/26 17:30:49 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	LIBLL_H
# define LIBLL_H

#include <unistd.h>
#include <stdlib.h>

void	*ll_bzero(void *s, size_t n);
void	*ll_memalloc(size_t size);

void	*ll_memcpy(void *dst, const void *src, size_t n);
void	*ll_memdup(void *p, size_t n);
void	*ll_memjoin(void *b1, void *b2, size_t len1, size_t len2);

size_t	*ll_strlen(const char *str);
char	*ll_strncpy(char *dst, const char *src, size_t n);
char	*ll_strjoin(const char *s1, const char *s2);
char	*ll_strdup(const char *str);
char	*ll_strnew(size_t size);
char	*ll_strchr(const char *str, int c);

void	ll_strrev(char *str);
void	ll_swap(char *a, char *b);
#endif
