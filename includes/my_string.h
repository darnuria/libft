#ifndef MY_STRING_H
#define MY_STRING_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdint.h>

#include "my_string.h"

int random_range(uint32_t range);
void* my_memcalloc(const size_t size,
    const size_t word_size,
    const char placeholder);
void *my_memalloc(size_t size);
void my_memdel(void **p);

char *my_strnew(size_t size);
void my_strdel(char **s);

size_t my_strpos(const char *s, int (*predicate)(int));
size_t my_countnc(const char *s, const char c, size_t n);

char *my_strsub(char const *s, unsigned int start, size_t len);
int my_strnequ(const char *s1, const char *s2, size_t n);
int my_strequ(const char *s1, const char *s2);
char *my_strdup(const char *s1);
void my_striter(char *s, void (*f)(char *));
void my_striteri(char *s, void (*f)(unsigned int, char *));
char *my_strmap(char const *s, char (*f)(char));
char *my_strmapi(char const *s, char (*f)(unsigned int, char));
size_t my_strlcat(char *dst, const char *src, size_t size);
char *my_strnjoin(char const *s1, char const *s2,
    const size_t n1, const size_t n2);
char *my_strjoin(char const *s1, char const *s2);
char  *my_strtrim(char const *s);
char *my_strrev(char *s);
void my_swapchar(char *a, char *b);
void my_strclr(char *s);
char *my_itoa(int n);

#endif // MY_STRING_H
