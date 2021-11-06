#ifndef __sub_hpp__
#define __sub_hpp__

#include "base.hpp"

class Sub : public Base {
	private:
		Base* left;
		Base* right;
	public:
		Sub() {}
		Sub(Base* left, Base* right){
			this->left = left;
			this->right = right;
		}
		virtual double evaluate(){
			return left->evaluate() - right->evaluate();
		}
		virtual std::string stringify(){
			return left->stringify() + " - " + right->stringify();
		}
};
#endif
