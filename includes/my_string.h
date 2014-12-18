#ifndef str_ING_H
#define str_ING_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdint.h>

#include "my_string.h"

int  random_range(const uint32_t range);
void* mem_calloc(const size_t size,
    const size_t word_size,
    const char placeholder);
void* mem_alloc(size_t size);
void* mem_delete(void *p);

char* str_new(size_t size);
void* str_delete(char *s);

size_t str_pos(const char *s, int (*predicate)(int));
size_t str_countnc(const char *s, const char c, size_t n);

char* str_sub(char const *s, unsigned int start, size_t len);
int   str_nequ(const char *s1, const char *s2, size_t n);
int   str_equ(const char *s1, const char *s2);
void  str_iter(char *s, void (*f)(char *));
void  str_iteri(char *s, void (*f)(unsigned int, char *));
char* str_dup(const char *s2);
char* str_map(char* const s, char (*f)(char));
char* str_mapi(char* const s, char (*f)(unsigned int, char));
size_t str_lcat(char *dst, const char *src, size_t size);
char* str_njoin(char const *s1, char const *s2,
    const size_t n1, const size_t n2);
char *str_join(char const *s1, char const *s2);
char *str_trim(char* const s);
char *str_rev(char *s);
void chr_swap(char * a, char * b);
void str_clr(char* s);
char *my_itoa(int n);

#endif // str_ING_H
