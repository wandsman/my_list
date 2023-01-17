//
// Created by nulln on 1/17/2023.
//
#include "my_list.h"

TYPE pop_front(m_list **head) {
    if ((*head) == NULL) {
        return HEAD_IS_NULL;
    }
    m_list *tmp;
    TYPE res;
    tmp = (*head);
    (*head) = (*head)->node;
    res = tmp->value;
    free(tmp);
    return res;
}

TYPE pop_back(m_list **head) {
    if ((*head) == NULL) {
        return HEAD_IS_NULL;
    }
    m_list *lst, *tmp = (*head);
    TYPE res;
    while (tmp->node != NULL) {
        lst = tmp;
        tmp = tmp->node;
    }
    res = tmp->value;
    lst->node = NULL;
    free((tmp));
    return res;
}