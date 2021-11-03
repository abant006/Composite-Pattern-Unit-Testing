#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {

    private:
        double value;
    public:
        Op(double value) : Base() { this->value = value; }
        virtual double evaluate() { return value; }
	// sstream?
        virtual std::string stringify() {
	if (value == 0) {
	return "0";
	}
	std::string str = std::to_string((value));
   }
};

class OpPositiveMock : public Base {
	public:
		OpPositiveMock() { }
		virtual double evaluate() { return 1.0; }
		virtual std::string stringify() { return "1" }
};

class OpNegMock : public Base {
	public:
		OpNegMock() { }
		virtual double evaluate() { return -1.0; }
		virtual std::string stringify() { return "-1"; }
};

class OpZeroMock : public Base {
	public:
		OpZeroMock() { }
		virtual double evaluate() { return 0.0; }
		virtual std::string stringify() { return "0"; }
};

#endif //__OP_HPP__
