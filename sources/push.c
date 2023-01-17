//
// Created by nulln on 1/16/2023.
//
#include "my_list.h"

int push_front(m_list **head, char value) {
    m_list *tmp;
    if (*head == NULL) {
        return HEAD_IS_NULL;
    }
    tmp = init(value);
    tmp->node = (*head);
    *head = tmp;
    return 0;
}


int push_back(m_list **head, char value) {
    m_list *t_head = (*head);
    if (t_head == NULL) {
        return HEAD_IS_NULL;
    }
    while (t_head->node != NULL) {
        t_head = t_head->node;
    }
    t_head->node = init(value);
    return 0;
}
