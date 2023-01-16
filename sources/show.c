//
// Created by nulln on 1/10/2023.
//
#include "my_list.h"

void show(m_list *head) {
    while (head != NULL) {
        printf("value: %c\nnode: %p\n", head->value, head->node);
        head = head->node;
    }
}