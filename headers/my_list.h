//
// Created by nulln on 1/10/2023.
//

#ifndef EXEC_C_TEST_LIB_H
#define EXEC_C_TEST_LIB_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stdio.h"
#include "malloc.h"

typedef int TYPE;
enum ERRORS {
    HEAD_IS_NULL = 1
};

typedef struct m_list {
    TYPE value;
    struct m_list *node;
} m_list;

void show(m_list *head);

m_list *init(TYPE value);

void clear(m_list *head);

int push_front(m_list **head, char value);

int push_back(m_list **head, char value);

TYPE pop_front(m_list **head);
TYPE pop_back(m_list **head);

#ifdef __cplusplus
}
#endif

#endif //EXEC_C_TEST_LIB_H
