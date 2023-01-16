//
// Created by nulln on 1/16/2023.
//
#include "my_list.h"

m_list *init(char value) {
    m_list *head = malloc(sizeof(m_list));
    if (head == NULL) {
        return NULL;
    }
    head->value = value;
    head->node = NULL;
    return head;
}

void clear(m_list *head) {
    if (head) {
        clear(head->node);
        free(head);
    }
}