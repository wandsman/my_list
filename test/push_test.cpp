//
// Created by nulln on 1/10/2023.
//
#include <gtest/gtest.h>
#include "my_list.h"

TEST(push_back, level_0) {
    int res = 0;
    m_list *test = init('5');
    res = push_back(&test, '7');
    ASSERT_EQ(res, 0);
    ASSERT_EQ(test->node->value, '7');
    clear(test);
    SUCCEED();
}

TEST(push_back, level_1) {
    int res = 0;
    m_list *test = nullptr;
    res = push_back(&test, '7');
    ASSERT_EQ(res, 1);
    clear(test);
    SUCCEED();
}

TEST(push_back, level_2) {
    int res = 0;
    m_list *test = init('5');
    res = push_back(&test, '7');
    res = push_back(&test, '8');
    ASSERT_EQ(res, 0);
    ASSERT_EQ(test->value, '5');
    ASSERT_EQ(test->node->value, '7');
    ASSERT_EQ(test->node->node->value, '8');
    clear(test);
    SUCCEED();
}

TEST(push_back, level_4) {
    int res = 0;
    char dump[4] = {'5', '7', '8', '1'};
    m_list *test = init('5');
    res = push_back(&test, dump[1]);
    res = push_back(&test, dump[2]);
    res = push_back(&test, dump[3]);
    ASSERT_EQ(res, 0);
    for (char i: dump) {
        ASSERT_EQ(test->value, i);
        test = test->node;
    }
    clear(test);
    SUCCEED();
}

TEST(push_front, level_0) {
    int res = 0;
    m_list *test = init('5');
    res = push_front(&test, '7');
    ASSERT_EQ(res, 0);
    ASSERT_EQ(test->value, '7');
    ASSERT_EQ(test->node->value, '5');
    clear(test);
    SUCCEED();
}

TEST(push_front, level_1) {
    int res = 0;
    m_list *test = nullptr;
    res = push_front(&test, '7');
    ASSERT_EQ(res, 1);
    clear(test);
    SUCCEED();
}