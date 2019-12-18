#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *i;

    if (!head || !(*head)) {
        return;
    }
    if (!(*head)->next) {
        free(*head);
        *head = NULL;
        return;
    }
    for (i = *head; i->next->next != NULL; i = i->next);
    free(i->next);
    i->next = NULL;
}

