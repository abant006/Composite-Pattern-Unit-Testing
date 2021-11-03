#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include "op.hpp"

class add : public Base {
	private:
		Base* left;
		Base* right;
	public:
		add() { }
		add(Base* left, Base* right) { this->left = left; this->right = right; }
		virtual double evaluate() { return left->evaluate() + right evaluate(); }
		virtual std::string stringify() { return left->stringify() + " + " + right->stringify(); }
};

#endif
