// Copyright 2022 Khristina Motyl
#include <gtest/gtest.h>
#include <vector>

#include "include/simple_num.h"

TEST(Simple_num_test, test1) {
    std::vector<int> expectedResult;
    expectedResult.push_back(13);
    expectedResult.push_back(17);
    expectedResult.push_back(19);
    expectedResult.push_back(23);
    expectedResult.push_back(29);
    ASSERT_EQ(simple_numbers::_Calculate(12, 30), expectedResult);
}

TEST(Simple_num_test, test2) {
    std::vector<int> expectedResult;
    expectedResult.push_back(2);
    expectedResult.push_back(3);
    expectedResult.push_back(5);
    expectedResult.push_back(7);
    expectedResult.push_back(11);
    ASSERT_EQ(simple_numbers::_Calculate(2, 11), expectedResult);
}

TEST(Simple_num_test, test3) {
    std::vector<int> expectedResult;
    expectedResult.push_back(2);
    expectedResult.push_back(3);
    ASSERT_EQ(simple_numbers::_Calculate(2, 3), expectedResult);
}

TEST(Simple_num_test, test4) {
    std::vector<int> expectedResult;
    expectedResult.push_back(5);
    expectedResult.push_back(7);
    expectedResult.push_back(11);
    ASSERT_EQ(simple_numbers::_Calculate(4, 12), expectedResult);
}

TEST(Simple_num_test, test5) {
    std::vector<int> expectedResult;
    expectedResult.push_back(101);
    expectedResult.push_back(103);
    expectedResult.push_back(107);
    expectedResult.push_back(109);
    ASSERT_EQ(simple_numbers::_Calculate(100, 110), expectedResult);
}

TEST(Simple_num_test, test6) {
    std::vector<int> expectedResult;
    expectedResult.push_back(41);
    expectedResult.push_back(43);
    expectedResult.push_back(47);
    ASSERT_EQ(simple_numbers::_Calculate(40, 47), expectedResult);
}

TEST(Simple_num_test, test7) {
    std::vector<int> expectedResult;
    expectedResult.push_back(173);
    expectedResult.push_back(179);
    ASSERT_EQ(simple_numbers::_Calculate(173, 179), expectedResult);
}

TEST(Simple_num_test, test8) {
    std::vector<int> expectedResult;
    expectedResult.push_back(53);
    expectedResult.push_back(59);
    expectedResult.push_back(61);
    expectedResult.push_back(67);
    expectedResult.push_back(71);
    ASSERT_EQ(simple_numbers::_Calculate(50, 72), expectedResult);
}
