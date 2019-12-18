#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *node;
    t_list *i;

    if (!list) {
        return;
    }
    node = mx_create_node(data);
    if (!node) {
        return;
    }
    if (!(*list)) {
        *list = node;
        return;
    }
    for (i = *list; i->next != NULL; i = i->next);
    i->next = node;
}

