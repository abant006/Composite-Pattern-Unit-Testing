#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "math.h"

class Pow : public Base
{
	private:
		Base* left;
		Base* right;
	public:
		Pow() { }
		Pow(Base* left, Base* right) { this->left = left; this->right = right; }
		virtual double evaluate() { return pow(  left->evaluate(), right->evaluate() ); }
		virtual std::string stringify() { return left->stringify() + " ** " + right->stringify(); }
};

class PosPowMock : public Base
{
	public:
		PosPowMock() { };
		virtual double evaluate() { return 2.0; }
		virtual std::string stringify() { return "2.000000"; }
};

class NegPowMock : public Base
{
	public:
		NegPowMock() { };
		virtual double evaluate() { return -2.0; }
		virtual std::string stringify() { return "-2.000000"; }
};

class ZeroPowMock : public Base
{
	public:
		ZeroPowMock() { };
		virtual double  evaluate() { return 0; }
		virtual std::string stringify() { return "0"; }
};

#endif //__POW_HPP__
