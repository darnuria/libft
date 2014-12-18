#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "my_string.h"

int random_range(const uint32_t range) {
  return rand() % range;
}

void* mem_calloc(const size_t size,
    const size_t word_size,
    const char placeholder) {
  void *map = malloc(size * word_size);
  if (map) {
    memset(map, placeholder, size);
  } else {
    perror("mem_calloc: ");
  }
  return map;
}

void *mem_alloc(size_t size) {
  if (size) {
    void *new_ptr = malloc(size);
    if (new_ptr != NULL) {
      memset(new_ptr, 0, size);
      return (new_ptr);
    }
  }
  return (NULL);
}

size_t str_pos(const char* s, int (*predicate)(int)) {
  size_t i = 0;

  for (; !predicate(s[i]) && s[i]; i++) { }
  return (i);
}

char* str_new(size_t size) {
  return mem_alloc(sizeof(char) * (size + 1));
}

void* str_delete(char *s) {
  return mem_delete((void *) s);
}

char *str_sub(const char *s, unsigned int start, size_t len) {
  if (s != NULL) {
    return strncpy(str_new(len), s + start, len);
  } else {
    return (NULL);
  }
}

int str_nequ(const char* s1, const char* s2, size_t n) {
  return (!strncmp(s1, s2, n));
}

int str_equ(const char* s1, const char* s2) {
  return (!strcmp(s1, s2));
}

void* mem_delete(void *p) {
  free(p);
  return NULL;
}

char *str_dup(const char* s1) {
  return strcpy(malloc(strlen(s1) + 1), s1);
}

void str_iter(char *s, void (*f)(char *)) {
  while (*s++) {
    f(s);
  }
}

void str_iteri(char *s, void (*f)(unsigned int, char *)) {
  for (size_t i = 0; s[i]; i++) {
    f(i, &s[i]);
  }
}

char* str_map(char* const s, char (*f)(char)) {
  char *new = str_new(strlen(s));

  for (size_t i = 0; s[i] != '\0'; i++) {
    new[i] = f(s[i]);
    i++;
  }
  return (new);
}

char *str_mapi(char* const s, char (*f)(unsigned int, char)) {
  char *new = str_new(strlen(s));

  for (size_t i = 0; s[i] != '\0'; i++) {
    new[i] = f(i, s[i]);
  }
  return (new);
}

size_t str_lcat(char* dst, const char* src, size_t size) {
  if (size == 0 || !dst) {
    return (0);
  } else {
    const size_t dst_len = strlen(dst);
    const size_t src_len = strlen(src);
    if (dst_len > size) {
      return (size + src_len);
    } else {
      size_t j = 0;
      for (; src[j] != '\0' && dst_len + j < size - 1; j++) {
        dst[dst_len + j] = src[j];
        j++;
      }
      dst[dst_len + j] = '\0';
      return (dst_len + src_len);
    }
  }
}

char *str_njoin(const char* s1, const char* s2,
    const size_t n1, const size_t n2) {
  char *new_str = str_new(n1 + n2);
  if (new_str != NULL) {
    strncpy(new_str, s1, n1);
    strncat(new_str, s2, n2);
  } else {
    perror("str_njoin: ");
  }
  return (new_str);
}

char *str_join(char const *s1, char const *s2) {
  size_t len_s1 = strlen(s2);
  size_t len_s2 = strlen(s2);
  return str_njoin(s1, s2, len_s1, len_s2);
}

void str_clr(char* s) {
  for (size_t i = 0; s[i] != '\0'; i++) {
    s[i] = '\0';
  }
}

char  *str_trim(char* const s) {
  size_t i = 0;

  while (isspace(s[i])) {
    i++;
  }
  size_t j = strlen(s);
  while (isspace(s[j - 1])) {
    j--;
  }
  if (j != 0) {
    j -= i;
  }
  char *str_new = str_sub(s, i, j);
  if (!str_new) {
    perror("str_trim: str_sub returned NULL.");
  }
  return (str_new);
}

char *str_rev(char* s) {
  if (s) {
    size_t len_s = strlen(s);
    const size_t stop = ((len_s % 2) ? (len_s / 2 + 1) : (len_s / 2));
    len_s -= 1;
    for (size_t i = 0; i < stop && s[i] != '\0'; i++) {
      chr_swap(&s[i], &s[len_s - i]);
    }
  }
  return (s);
}

static
void _minmax(char* s, const int n) {
  if ((long) n == -2147483648) {
    strcpy(s, "-2147483648");
  } else if (n == 0) {
    s[0] = '0';
  }
}

static
void _rev_or_not(char* s) {
  if (s[0] == '-') {
    str_rev(&s[1]);
  } else {
    str_rev(s);
  }
}

static
void _iter_itoa(const int n, char* s, const int i) {
  if (n) {
    s[i] = n % 10 + 48;
    _iter_itoa(n / 10, s, i + 1);
  }
}

char* str_itoa(int n) {
  char *s = str_new(12);

  if (s == NULL) {
    return (NULL);
  }
  _minmax(s, n);
  size_t i = 0;
  if (s[i] != '\0') {
    return (s);
  }
  if (n < 0) {
    s[i] = '-';
    n *= -1;
    i++;
  }
  _iter_itoa(n, s, i);
  _rev_or_not(s);
  return (s);
}

size_t str_countnc(const char* s, const char c, size_t n) {
  size_t i = 0;

  for (;*s != '\0' && n; n--) {
    if (*s == c) {
      i++;
    }
    s++;
  }
  return (i);
}

void chr_swap(char* a, char* b) {
  char swap = *a;
  *a = *b;
  *b = swap;
}

/*
   char *str_str(const char *s1, const char *s2) {
   return (str_nstr(s1, s2, strlen(s1)));
   }

   char *str_nstr(const char *s1, const char *s2, size_t n) {
   if (s2[0] == '\0') {
   return ((char *) s1);
   }
   for (size_t i = 0, j = 0; s1[i] && i < n; i++, j = 0) {
   j = 0;
   while (s2[j] == s1[i + j] &&
   s2[j] != '\0' &&
   (i + j) < n) {
   j++;
   }
   if (s2[j] == '\0') {
   return ((char *) s1 + i);
   }
   i++;
   }
   return (NULL);
   }
   */

