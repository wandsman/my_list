//
// Created by nulln on 1/17/2023.
//
#include <gtest/gtest.h>
#include "my_list.h"

TEST(pop_front, level_0) {
    m_list *head = init(0);
    TYPE res;
    push_front(&head, 5);
    res = pop_front(&head);
    ASSERT_EQ(res, 5);
}

TEST(pop_front, level_1) {
    TYPE res = 0;
    TYPE dump[4] = {5, 7, 8, 1};
    m_list *test = init(dump[0]);
    push_front(&test, dump[1]);
    push_front(&test, dump[2]);
    push_front(&test, dump[3]);
    ASSERT_EQ(res, 0);
    for (int i = 3; i >= 0; --i) {
        ASSERT_EQ(pop_front(&test), dump[i]);
    }
    SUCCEED();
}

TEST(pop_front, level_2) {
    TYPE res = 0;
    m_list *head = NULL;
    res = pop_front(&head);
    ASSERT_EQ(res, HEAD_IS_NULL);
}

TEST(pop_back, level_0) {
    m_list *head = init(0);
    TYPE res;
    push_back(&head, 5);
    res = pop_back(&head);
    ASSERT_EQ(res, 5);
}

TEST(pop_back, level_1) {
    TYPE res = 0;
    TYPE dump[4] = {5, 7, 8, 1};
    m_list *test = init(dump[0]);
    push_back(&test, dump[1]);
    push_back(&test, dump[2]);
    push_back(&test, dump[3]);
    ASSERT_EQ(res, 0);
    for (int i = 3; i >= 0; --i) {
        //printf("test:%d ----> dump:%d\n",pop_back(&test),dump[i]);
        ASSERT_EQ(pop_back(&test), dump[i]);
    }

    SUCCEED();
}

TEST(pop_back, level_2) {
    TYPE res = 0;
    m_list *head = NULL;
    res = pop_back(&head);
    ASSERT_EQ(res, HEAD_IS_NULL);
}