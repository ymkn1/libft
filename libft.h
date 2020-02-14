/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmnmocob.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:36:31 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/03 15:37:06 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

char			*mnmocob_strrev(char *str);
t_list			*mnmocob_lstrch(t_list *list, void *cont, size_t size);
void			mnmocob_lstadd_end(t_list **alst, t_list *new);
t_list			*mnmocob_lstget(t_list *l, int n);
int				mnmocob_pow(int n, int exp);
t_list			*mnmocob_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			mnmocob_lstiter(t_list *lst, void (*f)(t_list *elem));
void			mnmocob_lstadd(t_list **alst, t_list *new);
void			mnmocob_lstdel(t_list **alst, void (*del)(void *, size_t));
void			mnmocob_lstdelone(t_list **alst, void (*del)(void*, size_t));
t_list			*mnmocob_lstnew(void const *content, size_t content_size);
void			mnmocob_bzero(void *s, size_t n);
void			*mnmocob_memcpy(void *dst, const void *src, size_t n);
void			*mnmocob_memccpy(void *dst, const void *src, int c, size_t n);
void			*mnmocob_memset(void *b, int c, size_t len);
size_t			mnmocob_strlen(const char *s);
int				mnmocob_isalpha(int c);
int				mnmocob_isdigit(int c);
int				mnmocob_atoi(const char *str);
void			*mnmocob_memmove(void *dst, const void *src, size_t len);
void			*mnmocob_memchr(const void *s, int c, size_t n);
int				mnmocob_memcmp(const void *s1, const void *s2, size_t n);
char			*mnmocob_strdup(const char *s1);
char			*mnmocob_strcpy(char *dst, const char *src);
char			*mnmocob_strncpy(char *dst, const char *src, size_t n);
char			*mnmocob_strcat(char *s1, const char *s2);
char			*mnmocob_strncat(char *s1, const char *s2, size_t n);
size_t			mnmocob_strlcat(char *dst, const char *src, size_t size);
char			*mnmocob_strchr(const char *s, int c);
char			*mnmocob_strrchr(const char *s, int c);
char			*mnmocob_strstr(const char *s1, const char *s2);
char			*mnmocob_strnstr(const char *s1, const char *s2, size_t n);
int				mnmocob_strcmp(const char *s1, const char *s2);
int				mnmocob_strncmp(const char *s1, const char *s2, size_t n);
int				mnmocob_isalnum(int c);
int				mnmocob_isprint(int c);
int				mnmocob_isascii(int c);
int				mnmocob_toupper(int c);
int				mnmocob_tolower(int c);
void			*mnmocob_memalloc(size_t size);
void			mnmocob_memdel(void **ap);
char			*mnmocob_strnew(size_t size);
void			mnmocob_strdel(char **as);
void			mnmocob_strclr(char *s);
void			mnmocob_striter(char *s, void (*f)(char *));
void			mnmocob_striteri(char *s, void (*f)(unsigned int, char *));
char			*mnmocob_strmap(char const *s, char (*f)(char));
char			*mnmocob_strmapi(char const *s, char(*f)(unsigned int, char));
int				mnmocob_strequ(char const *s1, char const *s2);
int				mnmocob_strnequ(char const *s1, char const *s2, size_t n);
char			*mnmocob_strsub(char const *s, unsigned int start, size_t len);
char			*mnmocob_strjoin(char const *s1, char const *s2);
char			*mnmocob_strtrim(char const *s);
char			**mnmocob_strsplit(char const *s, char c);
char			*mnmocob_itoa(int n);
void			mnmocob_putchar(char c);
void			mnmocob_putstr(char const *s);
void			mnmocob_putendl(char const *s);
void			mnmocob_putnbr(int n);
void			mnmocob_putchar_fd(char c, int fd);
void			mnmocob_putstr_fd(char const *s, int fd);
void			mnmocob_putendl_fd(char const *s, int fd);
void			mnmocob_putnbr_fd(int n, int fd);
#endif
