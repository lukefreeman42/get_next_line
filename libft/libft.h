/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:11:08 by llelias           #+#    #+#             */
/*   Updated: 2018/11/17 15:53:49 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		is_x -- ft_isws
**		support -- ft_toupper
**		print -- ft_putchar
**		basics -- ft_atoi
**		array setter -- ft_memalloc
**		array parser  ft_memchr
**		array mover -- ft_memcpy
**		array freer -- ft_strdel
**		base arithmatic -- ft_numodgt_base
**		list structs -- ft_lstnew
*/

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_isws(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_ctoi(char c);
char				ft_itoc(int i);
void				ft_nullterm (char *str);
size_t				ft_strlen(const char *str);
void				ll_swap(char *a, char *b);
void				ft_putchar(char c);
void				ft_putstr(const char *str);
void				ft_putendl(const char *str);
void				ft_putnbr(int n);
void				ft_putchar_fd(const char c, int fd);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putendl_fd(const char *str, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
void				*ft_memalloc(size_t size);
void				*ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
char				*ft_strdup(const char *str);
char				*ft_strnew(size_t len);
char				*ft_strsub(const char *str, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strmap(char *str, char (*f) (char));
char				*ft_strmapi \
					(const char *str, char (*f) (unsigned int, char));
void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strchr (const char *str, int c);
char				*ft_strrchr (const char *str, int c);
char				*ft_strstr (const char *haystack, const char *needle);
char				*ft_strnstr \
					(const char *haystack, const char *needle, size_t n);
char				*ft_strtrim(char const *str);
char				**ft_strsplit(char const *s, char c);
void				*ft_memcpy(void	*dst, const void *src, size_t n);
void				*ft_memrcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat (char *s1, const char *s2, size_t s1_buff_size);
void				ft_striter(char *str, void (*f)(char *));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
void				ll_strrev(char *str);
void				ft_strdel(char **str);
void				ft_memdel(void **ap);
void				ft_strclr(char *s);
size_t				ft_numodgt_base(int n, int base);
char				*ft_itoa_base(int n, int base);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void(*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *neww);
void				ft_lstiter(t_list *lst, void (*f) (t_list *link));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *link));
#endif
