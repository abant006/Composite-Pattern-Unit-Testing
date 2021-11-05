#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"
#include "op.hpp"

PosPowMock* posNum_pow = new PosPowMock();
NegPowMock* negNum_pow = new NegPowMock();
ZeroPowMock* zeroNum_pow = new ZeroPowMock();

TEST(Pow, posNumPowTest)
{
	Pow* test = new Pow( posNum_pow, posNum_pow );
	EXPECT_EQ(test->evaluate(), 4.0);
}

TEST(Pow, negNumPowTest)
{
	Pow* test = new Pow( negNum_pow, posNum_pow );
	EXPECT_EQ(test->evaluate(), 4.0);
}

TEST(Pow, zeroNumPowTest)
{
	Pow* test = new Pow( posNum_pow, zeroNum_pow );
	EXPECT_EQ(test->evaluate(), 1.0);
}

// test for stringify()
TEST(Pow, stringifyPosPow)
{
	Pow* test = new Pow( posNum_pow, posNum_pow );
	EXPECT_EQ(test->stringify(), "2.000000 ** 2.000000");
}

TEST(Pow, stringifyNegPow)
{
	Pow* test = new Pow( negNum_pow, posNum_pow );
	EXPECT_EQ(test->stringify(), "-2.000000 ** 2.000000");
}

TEST(Pow, stringifyZeroPow)
{
	Pow* test = new Pow( posNum_pow, zeroNum_pow);
	EXPECT_EQ(test->stringify(), "2.000000 ** 0");
}

#endif //__POW_TEST_HPP__
