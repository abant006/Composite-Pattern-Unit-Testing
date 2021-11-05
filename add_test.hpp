#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "op.hpp"

OpPositiveMock* posNum_add = new OpPositiveMock();
OpNegMock* negNum_add = new OpNegMock();
OpZeroMock* zeroNum_add = new OpZeroMock();

TEST(Add, posNumAddTest)
{
	Add* test = new Add(posNum_add, posNum_add);
	EXPECT_EQ(test->evaluate(), 4.0);
}

TEST(Add, negNumAddTest)
{
	Add* test = new Add(negNum_add, negNum_add);
	EXPECT_EQ(test->evaluate(), -4.0);
}

TEST(Add, zeroNumAddTest)
{
	Add* test = new Add(posNum_add, zeroNum_add);
	EXPECT_EQ(test->evaluate(), 2.0);
}

TEST(Add, addFromMain)
{
	Op* seven = new Op(7);
	Op* two = new Op(2);
	Add* test = new Add(seven, two);
	EXPECT_EQ(test->evaluate(), 9);
}

// Testing the stringify()
TEST(Add, stringifyPosAdd)
{
	Add* test = new Add(posNum_add, posNum_add);
	EXPECT_EQ(test->stringify(), "2.000000 + 2.000000");
}

TEST(Add, stringifyNegAdd)
{
	Add* test = new Add(negNum_add, negNum_add);
	EXPECT_EQ(test->stringify(), "-2.000000 + -2.000000");
}

TEST(Add, stringifyZeroAdd)
{
	Add* test = new Add(posNum_add, zeroNum_add);
	EXPECT_EQ(test->stringify(), "2.000000 + 0");
}

TEST(Add, stringifyFromMain)
{
	Op* seven = new Op(7);
	Op* two = new Op(2);
	Add* test = new Add(seven, two);
	EXPECT_EQ(test->stringify(), "7.000000 + 2.000000");
}

#endif
