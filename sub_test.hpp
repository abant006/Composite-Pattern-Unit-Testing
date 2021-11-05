#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"
#include "op.hpp"

TEST(Sub, subNegVal) {
	Op* v1 = new Op(3);
	Op* v2 = new Op(-7);
	Sub* test = new Sub (v1,v2);
	EXPECT_EQ(test->evaluate(),10);
}

TEST(Sub, subPosVal) {
        Op* v1 = new Op(3);
        Op* v2 = new Op(2);
        Sub* test = new Sub (v1,v2);
        EXPECT_EQ(test->evaluate(),1);
}
TEST(Sub, subNegNegVal) {
        Op* v1 = new Op(-3);
        Op* v2 = new Op(-7);
        Sub* test = new Sub (v1,v2);
        EXPECT_EQ(test->evaluate(),4);
}
TEST(Sub, subNegResult) {
        Op* v1 = new Op(-10);
        Op* v2 = new Op(3);
        Sub* test = new Sub (v1,v2);
        EXPECT_EQ(test->evaluate(),-13);
}

TEST(Sub, subZeroPVal) {
        Op* v1 = new Op(2);
        Op* v2 = new Op(0);
        Sub* test = new Sub (v1,v2);
        EXPECT_EQ(test->evaluate(),2);
}

TEST(Sub, subZeroNVal) {
        Op* v1 = new Op(0);
        Op* v2 = new Op(3);
        Sub* test = new Sub (v1,v2);
        EXPECT_EQ(test->evaluate(),-3);
}
TEST(Sub, subNegValS) {
        Op* v1 = new Op(3);
        Op* v2 = new Op(7);
        Sub* test = new Sub (v1,v2);
        EXPECT_EQ(test->stringify(),"3.000000 - 7.000000 ");
}
TEST(Sub, subNegResultS) {
        Op* v1 = new Op(-3);
        Op* v2 = new Op(-7);
        Sub* test = new Sub (v1,v2);
        EXPECT_EQ(test->stringify(),"-3.000000 - 7.000000 ");
}

#endif
