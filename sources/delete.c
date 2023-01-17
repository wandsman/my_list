//
// Created by nulln on 1/17/2023.
//
#include "my_list.h"


void clear(m_list *head) {
    if (head) {
        clear(head->node);
        free(head);
    }
}