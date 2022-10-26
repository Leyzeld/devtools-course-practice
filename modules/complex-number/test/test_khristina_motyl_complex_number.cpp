// Copyright 2022 Khristina_Motyl

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Khristina_Motyl_Test, can_create_zero) {
    double re = 0.0;
    double im = 0.0;

    ComplexNumber z(re, im);

    EXPECT_NEAR(re, z.getRe(), 0.01);
    EXPECT_NEAR(im, z.getIm(), 0.01);
}

TEST(Khristina_Motyl_Test, сan_сreate_not_a_zero) {
    double re = -1.0;
    double im = 3.0;

    ComplexNumber z(re, im);

    EXPECT_DOUBLE_EQ(re, z.getRe());
    EXPECT_DOUBLE_EQ(im, z.getIm());
}

TEST(Khristina_Motyl_Test, can_sum) {
    double re1 = 55.0;
    double im1 = 0.5;

    double re2 = 45.0;
    double im2 = 0.6;

    ComplexNumber z1(re1, im1);
    ComplexNumber z2(re2, im2);
    ComplexNumber z3 = z1 + z2;

    EXPECT_EQ(100, z3.getRe());
    EXPECT_EQ(1.1, z3.getIm());
}

TEST(Khristina_Motyl_Test, can_prod) {
    ComplexNumber num_1(2.0, 5.2);
    ComplexNumber num_2(3.1, 4.0);
    ComplexNumber res;

    res = num_1 * num_2;

    EXPECT_DOUBLE_EQ(-14.6, res.getRe());
    EXPECT_DOUBLE_EQ(24.12, res.getIm());
}

TEST(Khristina_Motyl_Test, can_substrackt) {
    double re_part1 = 7.0;
    double im_part1 = 1.6;
    double re_part2 = 5.2;
    double im_part2 = 0.1;

    ComplexNumber z1(re_part1, im_part1);
    ComplexNumber z2(re_part2, im_part2);
    ComplexNumber z3 = z1 - z2;

    EXPECT_DOUBLE_EQ(1.8, z3.getRe());
    EXPECT_DOUBLE_EQ(1.5, z3.getIm());
}

TEST(Khristina_Motyl_Test, can_divis) {
    double re_part1 = 1.0;
    double im_part1 = 2.0;
    double re_part2 = 3.0;
    double im_part2 = 4.0;

    ComplexNumber z1(re_part1, im_part1);
    ComplexNumber z2(re_part2, im_part2);
    ComplexNumber z3 = z1 / z2;

    EXPECT_DOUBLE_EQ(0.44, z3.getRe());
    EXPECT_DOUBLE_EQ(0.08, z3.getIm());
}
