#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include "op.hpp"

class Div : public Base {
	private:
		Base* left;
		Base* right;
	public:
		Div() {}
		Div(Base*left, Base* right) {
			this->left = left;
			this->right = right;
		}
		virtual double evaluate() {
			return left->evaluate() / right->evaluate();
		}
		virtual std::string stringify() {
			return left->stringify() + " / " + right->stringify();
		}

};
#endif
