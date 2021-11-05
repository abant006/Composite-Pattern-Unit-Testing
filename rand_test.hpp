#ifndef __RAND_TEST_HPP
#define __RAND_TEST_HPP

#include "gtest/gtest.h"
#include "rand.hpp"
#include "op.hpp"

TEST(RandT, RandEval) {
	Rand* test = new Rand();
	Expect_GT(test->evaluate(),0);
}

#endif	
