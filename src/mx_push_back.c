#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *node = mx_create_node(data);
    t_list *cur;

    if (!node) {
        return;
    }
    if (!(*list)) {
        *list = node;
        return;
    }
    for (cur = *list; cur->next != NULL; cur = cur->next);
    cur->next = node;
}

