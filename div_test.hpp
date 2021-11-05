#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"
#include "op.hpp"

TEST(Div, divNegVal) {
        op* v1 = new op(12);
        op* v2 = new op(-2);
        Div* test = new Div (v1,v2);
        Expect_EQ(test->evaluate(),-6);
}

TEST(Div, divPosVal) {
        op* v1 = new op(3);
        op* v2 = new op(3);
        Div* test = new Div (v1,v2);
        Expect_EQ(test->evaluate(),1);
}
TEST(Div, divNegNegVal) {
        op* v1 = new op(-2);
        op* v2 = new op(-2);
        Div* test = new Div (v1,v2);
        Expect_EQ(test->evaluate(),1);
}
TEST(Div, divNegResult) {
        op* v1 = new op(-10);
        op* v2 = new op(2);
        Div* test = new Div (v1,v2);
        Expect_EQ(test->evaluate(),-5);
}

TEST(Div, divZeroPVal) {
        op* v1 = new op(2);
        op* v2 = new op(0);
        Div* test = new Div (v1,v2);
        Expect_EQ(test->evaluate(), INFINITY);
}

TEST(Div, divZeroNVal) {
        op* v1 = new op(0);
        op* v2 = new op(3);
        Div* test = new Div (v1,v2);
        Expect_EQ(test->evaluate(),-0);
}
TEST(Div, divNegValS) {
        op* v1 = new op(4);
        op* v2 = new op(2);
        Div* test = new Div (v1,v2);
        Expect_EQ(test->stringify(),"4.000000 / 2.000000 ");
}
TEST(Div, divNegResultS) {
        op* v1 = new op(-4);
        op* v2 = new op(-2);
        Div* test = new Div (v1,v2);
        Expect_EQ(test->stringify(),"-4.000000 - 2.000000 ");
}

#endif
