#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"
#include "op.hpp"

TEST(Sub, subNegVal) {
	op* v1 = new op(3);
	op* v2 = new op(-7);
	Sub* test = new Sub (v1,v2);
	Expect_EQ(test->evaluate(),10);
}

TEST(Sub, subPosVal) {
        op* v1 = new op(3);
        op* v2 = new op(2);
        Sub* test = new Sub (v1,v2);
        Expect_EQ(test->evaluate(),1);
}
TEST(Sub, subNegNegVal) {
        op* v1 = new op(-3);
        op* v2 = new op(-7);
        Sub* test = new Sub (v1,v2);
        Expect_EQ(test->evaluate(),4);
}
TEST(Sub, subNegResult) {
        op* v1 = new op(-10);
        op* v2 = new op(3);
        Sub* test = new Sub (v1,v2);
        Expect_EQ(test->evaluate(),-13);
}

TEST(Sub, subZeroPVal) {
        op* v1 = new op(2);
        op* v2 = new op(0);
        Sub* test = new Sub (v1,v2);
        Expect_EQ(test->evaluate(),2);
}

TEST(Sub, subZeroNVal) {
        op* v1 = new op(0);
        op* v2 = new op(3);
        Sub* test = new Sub (v1,v2);
        Expect_EQ(test->evaluate(),-3);
}
TEST(Sub, subNegValS) {
        op* v1 = new op(3);
        op* v2 = new op(7);
        Sub* test = new Sub (v1,v2);
        Expect_EQ(test->stringify(),"3.000000 - 7.000000 ");
}
TEST(Sub, subNegResultS) {
        op* v1 = new op(-3);
        op* v2 = new op(-7);
        Sub* test = new Sub (v1,v2);
        Expect_EQ(test->stringify(),"-3.000000 - 7.000000 ");
}

#endif
