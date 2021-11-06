#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"

TEST(Div, divNegVal) {
        Op* v1 = new Op(12);
        Op* v2 = new Op(-2);
        Div* test = new Div (v1,v2);
        EXPECT_EQ(test->evaluate(),-6);
}

TEST(Div, divPosVal) {
        Op* v1 = new Op(3);
        Op* v2 = new Op(3);
        Div* test = new Div (v1,v2);
        EXPECT_EQ(test->evaluate(),1);
}
TEST(Div, divNegNegVal) {
        Op* v1 = new Op(-2);
        Op* v2 = new Op(-2);
        Div* test = new Div (v1,v2);
        EXPECT_EQ(test->evaluate(),1);
}
TEST(Div, divNegResult) {
        Op* v1 = new Op(-10);
        Op* v2 = new Op(2);
        Div* test = new Div (v1,v2);
        EXPECT_EQ(test->evaluate(),-5);
}

TEST(Div, divZeroNVal) {
        Op* v1 = new Op(0);
        Op* v2 = new Op(3);
        Div* test = new Div (v1,v2);
        EXPECT_EQ(test->evaluate(),-0);
}
TEST(Div, divNegValS) {
        Op* v1 = new Op(4);
        Op* v2 = new Op(2);
        Div* test = new Div (v1,v2);
        EXPECT_EQ(test->stringify(),"4.000000 / 2.000000");
}
TEST(Div, divNegResultS) {
        Op* v1 = new Op(-4);
        Op* v2 = new Op(-2);
        Div* test = new Div (v1,v2);
        EXPECT_EQ(test->stringify(),"-4.000000 / -2.000000");
}

#endif
