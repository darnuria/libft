#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "my_string.h"

int random_range(const uint32_t range) {
  return rand() % range;
}

void* my_memcalloc(const size_t size,
    const size_t word_size,
    const char placeholder) {
  void *map = malloc(size * word_size);
  if (map) {
    memset(map, placeholder, size);
  } else {
    perror("my_memcalloc: ");
  }
  return map;
}

void *my_memalloc(size_t size) {
  if (size) {
    void *new_ptr = malloc(size);
    if (new_ptr != NULL) {
      memset(new_ptr, 0, size);
      return (new_ptr);
    }
  }
  return (NULL);
}

size_t my_strpos(const char *s, int (*predicate)(int)) {
  size_t i = 0;

  for (; !predicate(s[i]) && s[i]; i++) { }
  return (i);
}

char *my_strnew(size_t size) {
  return (my_memalloc(sizeof(char) * (size + 1)));
}

void my_strdel(char **s) {
  my_memdel((void **) s);
}

char *my_strsub(char const *s, unsigned int start, size_t len) {
  if (s != NULL) {
    char *new_str = my_strnew(len);
    strncpy(new_str, (char *)(s + start), len);
    return (new_str);
  } else {
    return (NULL);
  }
}

int my_strnequ(const char *s1, const char *s2, size_t n) {
  return (!strncmp(s1, s2, n));
}

int my_strequ(const char *s1, const char *s2) {
  return (!strcmp(s1, s2));
}

void my_memdel(void **p) {
  if (p != NULL && *p != NULL) {
    free(*p);
    *p = NULL;
  }
}

char *my_strdup(const char *s1) {
  if (s1) {
    char *cpy = my_strnew(strlen(s1));
    strcpy(cpy, s1);
    return (cpy);
  } else {
    return (NULL);
  }
}

void my_striter(char *s, void (*f)(char *)) {
  while (*s++) {
    f(s);
  }
}

void my_striteri(char *s, void (*f)(unsigned int, char *)) {
  for (size_t i = 0; s[i]; i++) {
    f(i, &s[i]);
  }
}

char *my_strmap(char const *s, char (*f)(char)) {
  char *str_new = my_strnew(strlen(s));

  for (size_t i = 0; s[i] != '\0'; i++) {
    str_new[i] = f(s[i]);
    i++;
  }
  return (str_new);
}

char *my_strmapi(char const *s, char (*f)(unsigned int, char)) {
  char *str_new = my_strnew(strlen(s));

  for (size_t i = 0; s[i] != '\0'; i++) {
    str_new[i] = f(i, s[i]);
  }
  return (str_new);
}

size_t my_strlcat(char *dst, const char *src, size_t size) {
  if (size == 0 || dst == NULL) {
    return (0);
  } else {
    size_t i = strlen(dst);
    size_t src_len = strlen(src);
    if (i > size) {
      return (size + src_len);
    }
    size_t ret = i + src_len;
    size_t j = 0;
    for (; src[j] != '\0' && i + j < size - 1; j++)
    {
      dst[i + j] = src[j];
      j++;
    }
    dst[i + j] = '\0';
    return (ret);
  }
}

char *my_strnjoin(char const *s1, char const *s2,
    const size_t n1, const size_t n2) {
  char *new_str = my_strnew(n1 + n2);

  if (new_str != NULL) {
    strncpy(new_str, s1, n1);
    strncat(new_str, s2, n2);
  }
  return (new_str);
}

char *my_strjoin(char const *s1, char const *s2) {
  size_t len_s1 = strlen(s2);
  size_t len_s2 = strlen(s2);
  return my_strnjoin(s1, s2, len_s1, len_s2);
}

void my_strclr(char *s) {
  for (size_t i = 0; s[i] != '\0'; i++) {
    s[i] = '\0';
  }
}

char  *my_strtrim(char const *s) {
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
  char *str_new = my_strsub(s, i, j);
  if (str_new == NULL) {
    return (NULL);
  } else {
    return (str_new);
  }
}

char *my_strrev(char *s) {
  if (s) {
    size_t len_s = strlen(s);
    const size_t stop = ((len_s % 2) ? (len_s / 2 + 1) : (len_s / 2));
    len_s -= 1;
    for (size_t i = 0; i < stop && s[i] != '\0'; i++) {
      my_swapchar(&s[i], &s[len_s - i]);
    }
  }
  return (s);
}

static
void my_minmax(char *s, const int n) {
  if ((long) n == -2147483648) {
    strcpy(s, "-2147483648");
  } else if (n == 0) {
    s[0] = '0';
  }
}

static
void my_rev_or_not(char *s) {
  if (s[0] == '-') {
    my_strrev(&s[1]);
  } else {
    my_strrev(s);
  }
}

static
void my_rec_itoa(const int n, char *s, const int i) {
  if (n) {
    s[i] = n % 10 + 48;
    my_rec_itoa(n / 10, s, i + 1);
  }
}

char *my_itoa(int n) {
  char *s = my_strnew(12);

  if (s == NULL) {
    return (NULL);
  }
  my_minmax(s, n);
  size_t i = 0;
  if (s[i] != '\0') {
    return (s);
  }
  if (n < 0) {
    s[i] = '-';
    n *= -1;
    i++;
  }
  my_rec_itoa(n, s, i);
  my_rev_or_not(s);
  return (s);
}

size_t my_countnc(const char *s, const char c, size_t n) {
  size_t i = 0;

  for (;*s != '\0' && n; n--) {
    if (*s == c) {
      i++;
    }
    s++;
  }
  return (i);
}

void my_swapchar(char *a, char *b) {
  char swap = *a;
  *a = *b;
  *b = swap;
}

/*
   char *my_strstr(const char *s1, const char *s2) {
   return (my_strnstr(s1, s2, strlen(s1)));
   }

   char *my_strnstr(const char *s1, const char *s2, size_t n) {
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

