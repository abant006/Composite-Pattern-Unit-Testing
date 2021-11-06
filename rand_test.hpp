#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "rand.hpp"
#include "op.hpp"

TEST(Rand, RandEval) {
	Rand* test = new Rand();
	EXPECT_GT(test->evaluate(),0);
}

#endif	
