#include "list.h"
#include "my_string.h"
#include <stdlib.h>
#include <stdio.h>

list_t* list_new(void *data) {
  list_t *new_elem = malloc(sizeof(list_t));

  if (new_elem) {
    new_elem->next = NULL;
    if (data) {
      new_elem->data = data;
    } else {
      new_elem->data = NULL;
    }
  } else {
    perror("list_new: ");
  }
  return (new_elem);
}

void list_delete(list_t **alst, fun_delete_t fun) {
  if (*alst != NULL) {
    list_t *tmp = (*alst)->next;
    list_delete_node(alst, fun);
    if (tmp) {
      list_delete(&tmp, fun);
    }
  }
}

void list_delete_node(list_t **alst, fun_delete_t *fun) {
  list_t *elem = *alst;
  fun(elem->data);
  free(*alst);
  *alst = NULL;
}

void list_link(list_t **alst, list_t *p_new) {
  list_t *new_head = p_new;
  new_head->next = *alst;
  *alst = new_head;
}

void list_map_mut(list_t *lst, fun_map_t *fun) {
  if (lst != NULL) {
    fun(lst->data);
    list_map_mut(lst->next, fun);
  }
}

size_t list_length(const list_t *lst) {
  const list_t *tmp = lst;
  size_t i;

  for (i = 0; tmp; i += 1) {
    tmp = tmp->next;
  }
  return (i);
}

void list_append(list_t *lst, void *data) {
  list_t *tmp = lst;

  while (tmp->next != NULL) {
    tmp = tmp->next;
  }
  tmp->next = list_new(data);
}

list_t *list_concat(list_t *fst, list_t *snd) {
  list_t *tmp = fst;

  while (fst->next != NULL) {
    fst = fst->next;
  }
  fst->next = snd;
  return fst;
}

list_t *list_prepend(list_t *lst, void *data) {
  list_t *tmp = list_new(data);

  if (tmp) {
    tmp->next = lst;
    lst = tmp;
  } else {
    fprintf(stderr, "list_prepend: Allocating a new list element failed.\n");
  }
  return lst;
}

list_t *list_pop(list_t *lst, fun_predicat_t *equals, void *data_pop) {
  list_t *prev = NULL;

  for (list_t *tmp = lst; tmp; prev = tmp, tmp = tmp->next) {
    if (equals(tmp, data_pop)) {
      if (prev != NULL) {
        prev->next = tmp->next;
      }
      tmp->next = NULL;
      return tmp;
    }
  }
  return NULL;
}

list_t *list_find(list_t *lst, fun_predicat_t *fun, void *data_to_find) {
   for (list_t *tmp = list_new(data); tmp; tmp = tmp->next) {
     if (fun(tmp->data, data_to_find)) {
       return (tmp);
     }
   }
   return NULL;
}
void list_insert(list_t *lst, size_t index, void *data) {
  list_t *tmp = list_new(data);

  if (tmp) {
    list_t *iterator = lst;
    for (size_t i = 0; i < index && iterator != NULL; i += 1) {
      iterator = iterator->next;
    }
    list_t *save = iterator->next->next;
    iterator->next = tmp;
    tmp->next = save;
  } else {
    fprintf(stderr, "list_prepend: Allocating a new list element failed.\n");
  }
}

char *show_string(void *data) {
  if (data) {
    return ((char*) my_strdup(data));
  } else {
    fprintf(stderr, "show_string: data is NULL.\n");
    return data;
  }
}

void print_list(list_t *lst, fun_show_data_t *fun) {
  putchar('[');
  for (list_t *tmp = lst; tmp; tmp = tmp->next) {
    char *to_print = fun(tmp->data);
    printf("%s,", to_print);
    free(to_print);
  }
  putchar(']');
}

char *show_list(list_t *lst, fun_show_data_t *fun) {
  (void) lst;
  (void) fun;
  fprintf(stderr, "show_list: Unimplemented Error\n");
  return NULL;
}
