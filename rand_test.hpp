#ifndef __RAND_TEST_HPP
#define __RAND_TEST_HPP

#include "gtest/gtest.h"
#include "rand.hpp"
#include "op.hpp"

TEST(Rand, RandEval) {
	RandT* test = new Rand();
	EXPECT_GT(test->evaluate(),0);
}

#endif	
