#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "mult.hpp"
#include "op.hpp"

OpPositiveMock* posNum_mult = new OpPositiveMock();
OpNegMock* negNum_mult = new OpNegMock();
OpZeroMock* zeroNum_mult = new OpZeroMock();

TEST(Mult, posNumMultTest)
{
	Mult* test = new Mult(posNum_mult, posNum_mult);
	EXPECT_EQ(test->evaluate(), 4.0);
}

TEST(Mult, negNumMultTest)
{
	Mult* test = new Mult(negNum_mult, negNum_mult);
	EXPECT_EQ(test->evaluate(), 4.0);
}

TEST(Mult, zeroNumMultTest)
{
	Mult* test = new Mult(posNum_mult, zeroNum_mult);
	EXPECT_EQ(test->evaluate(), 0);
}

// Testing for the stringify()
TEST(Mult, stringifyPosMult)
{
	Mult* test = new Mult(posNum_mult, posNum_mult);
	EXPECT_EQ(test->stringify(), "2.000000 * 2.000000");
}

TEST(Mult, stringifyNegMult)
{
	Mult* test = new Mult(negNum_mult, negNum_mult);
	EXPECT_EQ(test->stringify(), "-2.000000 * -2.000000");
}

TEST(Mult, stringifyZeroMult)
{
	Mult* test = new Mult(posNum_mult, zeroNum_mult);
	EXPECT_EQ(test->stringify(), "2.000000 * 0");
}

#endif



