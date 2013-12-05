/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:07:32 by aviala            #+#    #+#             */
/*   Updated: 2013/12/02 07:17:05 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef struct	s_list
{
	void			*data;
	size_t			data_size;
	struct s_list	*next;
}				t_list;

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
char	*ft_itoa(int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int 	ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memalloc(const size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(const char *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *s1, const char *s2);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s1);
int		ft_strequ(const char *s1, const char *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	**ft_strsplit(const char *s, const char c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*
** List
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *p_new);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list*	ft_lstnew(void const *data, size_t data_size);
t_list	*ft_lst_push_back(const t_list *lst, const void *data,
							const size_t data_size);
t_list	*ft_lst_push_front(const t_list *b_lst, const void *data,
							const size_t data_size);

/*
** Bonus
*/

void	ft_swapchar(char *a, char *b);
char	*ft_strrev(char *str);

#endif /* !LIBFT_H */
