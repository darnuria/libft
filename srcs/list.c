#include "list.h"
#include <stdlib.h>

void list_add(list_t **alst, list_t *p_new) {
  list_t *begin_prev = p_new;
  begin_prev->next = *alst;
  *alst = begin_prev;
}

void list_delete(list_t **alst, fun_delete_t fun) {
  if (*alst != NULL) {
    list_t *tmp = (*alst)->next;
    list_delete_node(alst, fun);
    list_delete(&tmp, fun);
  }
}

void list_delete_node(list_t **alst, fun_delete_t fun) {
  list_t *elem = *alst;
  fun(elem->data);
  free(*alst);
  *alst = NULL;
}

void list_iter(list_t *lst, void (*f)(list_t *elem)) {
  if (lst->next != NULL) {
    list_iter(lst->next, f);
  }
  f(lst);
}

size_t list_len(const list_t *lst) {
  list_t *tmp;
  size_t i;

  i = 0;
  while ((tmp = lst->next) != NULL)
    i++;
  return (i);
}

list_t* list_new(void *data) {
  list_t *new_elem = malloc(sizeof(list_t));

  if (new_elem != NULL) {
    if (data == NULL) {
      new_elem->data = NULL;
    } else {
      new_elem->data = data;
      if (new_elem->data) {
        free(new_elem);
      }
    }
    new_elem->next = NULL;
  }
  return (new_elem);
}

void list_pushback(list_t *lst, void *data) {
  list_t *p_tmp;

  while ((p_tmp = lst->next) != NULL) {}
  p_tmp->next = list_new(data);
}

void list_pushback_new(list_t *lst, list_t *new) {
  list_t *p_tmp;

  while ((p_tmp = lst->next) != NULL) { }
  p_tmp->next = new;
}

void list_pushfront(list_t *b_lst, void *data) {
  list_t *b_head;

  if ((b_head = list_new(data)) != NULL) {
    b_head->next = b_lst;
  }
  b_lst = b_head;
}

void list_pushfront_new(list_t *b_lst, list_t *lst_new) {
  if ((b_lst != NULL)) {
    lst_new->next = b_lst;
  }
  b_lst = lst_new;
}
