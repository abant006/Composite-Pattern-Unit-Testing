#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "op.hpp"

class Mult : public Base
{
	private:
		Base* left;
		Base* right;
	public:
		Mult() { }
		Mult(Base* left, Base* right) { this->left = left; this->right = right; }
		virtual double evaluate() { return left->evaluate() * right->evaluate(); }
		virtual std::string stringify() { return left->stringify() + " * " + right->stringify(); }
};

#endif //__MULT_HPP__

