/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-ca <fdiaz-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:36:02 by fdiaz-ca          #+#    #+#             */
/*   Updated: 2022/10/29 18:28:12 by fdiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* The bzero() function writes n zeroed bytes to the string s.  If n is      */
/* zero, bzero() does nothing.                                               */
void	ft_bzero(void *s, size_t n);
/* Tests for any character for which isupper or islower is true.             */
int		ft_isalpha(int c);
/* Tests for an ASCII character, which is any character between 0 and        */
/* decimal 127 inclusive.                                                    */
int		ft_isascii(int c);
/* Tests for a decimal digit character.                                      */
int		ft_isdigit(int c);
/* Tests for any character for which isalpha or isdigit is true              */
int		ft_isalnum(int c);
/* Tests for any printing character, including space (' ')                   */
int		ft_isprint(int c);
/* Copies n bytes from memory area src to memory area dst.  If dst and src   */
/* overlap, behavior is undefined.                                           */
void	*ft_memcpy(void *dst, const void *src, size_t n);
/* Writes len bytes of value c (converted to unsigned char) to the string b. */
void	*ft_memset(void *b, int c, size_t len);
/* Computes the length of the string s                                       */
size_t	ft_strlen(const char *s);
/* Copies and concatenates strings with the same input parameters and output */
/* result as snprintf(3). Takes the full size of the destination buffer and  */
/* guarantee NUL-termination if there is room.  Note that room for the NUL   */
/* should be included in dstsize. Copies up to dstsize - 1 characters from   */
/* the string src to dst, NUL-terminating the result if dstsize is not 0.    */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/* Converts a lower-case letter to the corresponding upper-case letter.      */
int		ft_toupper(int c);
/* Converts a upper-case letter to the corresponding lower-case letter.      */
int		ft_tolower(int c);
/* Locates the first occurrence of c (converted to a char) in the string     */
/* pointed to by s. The terminating null character is considered to be part  */
/* of the string; therefore if c is `\0', it locates the terminating `\0'.   */
char	*ft_strchr(const char *s, int c);
/* Locates the last occurrence of c (converted to a char) in the string      */
/* pointed to by s. The terminating null character is considered to be part  */
/* of the string; therefore if c is `\0', it locates the terminating `\0'.   */
char	*ft_strrchr(const char *s, int c);
/* Lexicographically compare the null-terminated strings s1 and s2 not more  */
/* than n characters. It returns an integer greater than, equal to, or less  */
/* than 0, according as the string s1 is greater than, equal to, or less     */
/* than the string s2.                                                       */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/* Locates the first occurrence of c (converted to an unsigned char) in      */
/* string s. Returns a pointer to the byte located, or NULL if no such byte  */
/* exists within n bytes.                                                    */
void	*ft_memchr(const void *s, int c, size_t n);
/* Compares byte string s1 against byte string s2. Both strings are assumed  */
/* to be n bytes long. Returns zero if the two strings are identical, other- */
/* wise returns the difference between the first two differing bytes         */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/* Locates the first occurrence of the null-terminated string needle in the  */
/* string haystack, where not more than len characters are searched.         */
/* If needle is empty string, haystack is returned; if needle occurs nowhere */
/* in haystack, NULL is returned; otherwise a pointer to the first character */
/* of the first occurrence of needle is returned.                            */
char	*ft_strnstr(const char *hays, const char *ndle, size_t len);
/* Converts initial part of string pointed to by str to int representation.  */
int		ft_atoi(const char *str);
/* Copies and concatenates strings with the same input parameters and output */
/* result as snprintf(3). Takes the full size of the destination buffer and  */
/* guarantee NUL-termination if there is room.  Room for the NUL should be   */
/* included in dstsize. Appends string src to the end of dst. It will append */
/* at most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, */
/* unless dstsize is 0 or the original dst string was longer than dstsize    */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/* Copies len bytes from string src to string dst. The two strings may       */
/* overlap; the copy is always done in a non-destructive manner.             */
void	*ft_memmove(void *dst, const void *src, size_t len);
/* Contiguously allocates enough space for count objects that are size bytes */
/* of memory each and returns a pointer to the allocated memory.  The        */
/* allocated memory is filled with bytes of value zero.*/
void	*ft_calloc(size_t count, size_t size);
/* Allocates sufficient memory for a copy of the string s1, does the copy,   */
/* and returns a pointer to it.  The pointer may subsequently be used as an  */
/* argument to the function free.                                            */
char	*ft_strdup(const char *s1);
/* Allocates and returns a substring from the string ’s’. The substring      */
/* begins at index ’start’ and is of maximum size ’len’.                     */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/* Allocates and returns a new string, which is the result of the            */
/* concatenation of ’s1’ and ’s2’.                                           */
char	*ft_strjoin(char const *s1, char const *s2);
/* Allocates and returns a copy of ’s1’ with the characters specified in     */
/* ’set’ removed from the beginning and the end of the string.               */
char	*ft_strtrim(char const *s1, char const *set);
/* Allocates and returns an array of strings obtained by splitting ’s’ using */
/* the character ’c’ as a delimiter. The array must end with a NULL pointer. */
char	**ft_split(char const *s, char c);
/* Allocates (with malloc(3)) and returns a string representing the integer  */
/* received as an argument. Negative numbers must be handled.                */
char	*ft_itoa(int n);
/* Applies the function ’f’ to each character of the string ’s’, and passing */
/* its index as first argument to create a new string (with malloc(3))       */
/* resulting from successive applications of ’f’.                            */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* Applies the function ’f’ on each character of the string passed as        */
/* argument, passing its index as first argument. Each character is passed   */
/* by address to ’f’ to be modified if necessary.                            */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
/* Outputs the character ’c’ to the given file descriptor.                   */
void	ft_putchar_fd(char c, int fd);
/* Outputs the string ’s’ to the given file descriptor.                      */
void	ft_putstr_fd(char *s, int fd);
/* Outputs the string ’s’ to the given file descriptor followed by a newline.*/
void	ft_putendl_fd(char *s, int fd);
/* Outputs the integer ’n’ to the given file descriptor.                     */
void	ft_putnbr_fd(int n, int fd);
/* BONUS */
/* Allocates and returns a new node. The member variable ’content’ is        */
/* initialized with the value of the parameter ’content’. The variable       */
/* ’next’ is initialized to NULL.                                            */
t_list	*ft_lstnew(void *content);
/* Adds the node ’new’ at the beginning of the list.                         */
void	ft_lstadd_front(t_list **lst, t_list *new);
/* Counts the number of nodes in a list.                                     */
int		ft_lstsize(t_list *lst);
/* Returns the last node of the list.                                        */
t_list	*ft_lstlast(t_list *lst);
/*  Adds the node ’new’ at the end of the list.                              */
void	ft_lstadd_back(t_list **lst, t_list *new);
/* Takes as a parameter a node and frees the memory of the node’s content    */
/* using the function ’del’ given as a parameter and free the node. The      */
/* memory of ’next’ must not be freed.                                       */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/* Deletes and frees the given node and every successor of that node, using  */
/* the function ’del’ and free. The pointer to the list must be set to NULL. */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/* Iterates list ’lst’ and applies function ’f’ on the content of each node. */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/* Iterates the list ’lst’ and applies the function ’f’ on the content of    */
/* each node. Creates a new list resulting of the successive applications of */
/* the function ’f’. The ’del’ function is used to delete the content of a   */
/* node if needed.                                                           */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif