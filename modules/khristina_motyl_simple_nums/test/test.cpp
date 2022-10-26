// Copyright 2022 Khristina Motyl
#include <gtest/gtest.h>

#include "include/simple_num.h"

TEST(Simple_num_test, test1) {
    std::vector<int> expectedResult;
    expectedResult.push_back(2);
    expectedResult.push_back(3);
    expectedResult.push_back(5);
    expectedResult.push_back(7);
    expectedResult.push_back(11);
    ASSERT_EQ(simple_numbers::_Calculate(0, 11), expectedResult);
}
