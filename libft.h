/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiraldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:16:11 by mgiraldo          #+#    #+#             */
/*   Updated: 2020/03/04 22:30:32 by mgiraldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

/*
** References for 42 libft of C Standard Library
** https://en.wikipedia.org/wiki/C_standard_library
*/

/*
** 42 libft | string.h | Three subsections
** (1) string mainpulation (2) string examination (3) memory manipulation
*/

/*
**  String manipulation | Funtion sorted by return type
*/

char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_strdel(char **as);
void				ft_strclr(char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*
**  String examination | Funtion sorted by return type
*/

int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
								size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				*ft_strndup(const char *s1, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
size_t				ft_strlen(const char *s);
size_t				ft_strnlen(const char *s, size_t maxlen);
int					ft_wordcount(char const *s, char c);
int					ft_wordcountx(char const *s, char *c);

/*
**  Memory manipulation | Function sorted by return type
*/

int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c_in, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_mempalloc(size_t size);
void				*ft_mempcpy(void *dest, const void *src, size_t n);
void				*ft_memcpy_rev(void *dest, const void *src, size_t n);
void				ft_free(void *ptr);
void				ft_memdel(void **ap);
void				*ft_calloc(size_t count, size_t size);

/*
** 42 libft | stdlib.h | Function sorted by return type
** https://en.wikipedia.org/wiki/C_string_handling#Numeric_conversions
** Math conversion
*/

int					ft_numlen(long int n);
int					ft_numlen_base(long int n, size_t base);
int					ft_atoi(const char *str);
int					ft_atoi_base(const char *s, int base);
int					ft_isalnum_base(char c, int base);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int b);

/*
** 42 libft | stdio.h | Function sorted by return type
** https://en.wikipedia.org/wiki/C_file_input/output
*/

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
** 42 libft | ctype.h | Function sorted by return type
** https://en.wikipedia.org/wiki/C_character_classification
*/

int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isxdigit(int c);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
** 42 LIBFT MATH.H
** https://en.wikipedia.org/wiki/C_mathematical_functions#Overview_of_functions
*/

int					ft_abs(int n);

/*
**	function delcrations are use by only by Libft Unit Test and Libftest
*/

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				**ft_split(char const *s, char c);

/*
** Libft project bonus part | linked list
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

#endif
