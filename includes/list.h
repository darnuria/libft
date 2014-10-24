#ifndef LIST_H
#define LIST_H

#include <string.h>
#include <stdbool.h>

// List

typedef struct s_list {
 void   *data;
 struct s_list *next;
} list_t;

typedef void (fun_delete_t)(void* data);
typedef void (fun_map_t)(void* data);
typedef char* (fun_show_data_t)(void* data);
typedef int (fun_acc_t)(list_t* list, size_t acc);
typedef bool (fun_predicat_t)(const void *data, const void *to_find);

// Static functions

// End Static function

list_t* list_new_shallow(void *data);
list_t *list_new_deep(void *data, size_t word_size);
void list_delete_node(list_t **xs, fun_delete_t fun);
void list_delete(list_t **list, fun_delete_t fun);

list_t *list_pop(list_t *lst, fun_predicat_t *equals, void *data_pop);
void list_link(list_t **list, list_t *new_p);
void list_map_mut(list_t *list, fun_map_t fun);

//size_t list_foldl(const list_t *xs, size_t acc, fun_acc_t fun);

list_t *list_find(list_t *lst, fun_predicat_t *fun, void *data_to_find);
size_t list_length(const list_t *list);
void list_append(list_t **list, void *data);
list_t *list_prepend(list_t *list, void *data);
list_t *list_concat(list_t *list, list_t *new_list);
void list_insert(list_t *lst, size_t index, void *data);

void print_list(list_t *lst, fun_show_data_t *fun);
list_t *from_array(void *array, size_t length, size_t word_size);
char *show_list(list_t *lst, fun_show_data_t *fun);
char *show_string(void *data);

#endif // LIST_H
