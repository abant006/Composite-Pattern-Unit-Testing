#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {

    private:
        double value;
    public:
        Op(double value) : Base() { this->value = value; }
        virtual double evaluate() { return value; }
        virtual std::string stringify() {
		return std::to_string(value);
	}
};

class OpPositiveMock : public Base {
	public:
		OpPositiveMock() { }
		virtual double evaluate() { return 2.0; }
		virtual std::string stringify() { return "2.000000"; }
};

class OpNegMock : public Base {
	public:
		OpNegMock() { }
		virtual double evaluate() { return -2.0; }
		virtual std::string stringify() { return "-2.000000"; }
};

class OpZeroMock : public Base {
	public:
		OpZeroMock() { }
		virtual double evaluate() { return 0.0; }
		virtual std::string stringify() { return "0"; }
};

#endif //__OP_HPP__
