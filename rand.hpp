#ifndef __RAND_HPP__
#define __RAND_HPP__

#include <sstream>
#include"base.hpp"
#include <ctime>
#include <cstdlib>

class Rand : public Base{
	private:
		double value;
	public:
		Rand() : Base() {
			srand(time(0));
			value = rand()%100;
		}
		
		virtual double evaluate() {
			return value;
		}

		virtual std::string stringfy{} {
			std::ostringstream sstream;
			sstream << value;
			return sstream.str();
		}
};
#endif
