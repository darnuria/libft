#ifndef LIST_H
#define LIST_H

#include <string.h>

/*
** List
*/

typedef struct s_list {
 void   *data;
 struct s_list *next;
} list_t;

typedef void (*fun_delete_t)(void* data);
typedef void (*fun_map_t)(list_t *elem);
typedef int (*fun_acc_t)(list_t* list, size_t acc);

/*
 * Static functions
 */
static
size_t list_lenght_aux(const list_t *xs, size_t acc);

list_t* list_new(void *data);
void list_link(list_t **xs, list_t *new_p);
void list_delete_node(list_t **xs, fun_delete_t fun);
void list_delete(list_t **xs, fun_delete_t fun);

void list_map(list_t *lst, fun_map_t fun);
size_t list_foldl(const list_t *xs, size_t acc, fun_acc_t fun);
size_t list_lenght(const list_t *xs);

void *list_pushback(list_t *lst, void *data);
void *list_pushback_new(list_t *lst, list_t *new_p);
void *list_pushfront(list_t *b_lst, void *data);
void *list_pushfront_new(list_t *b_lst, list_t *lst_new);

#endif /* LIST_H */
