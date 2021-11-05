#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base() { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { return std::to_string(value); }
};

#endif //__OP_HPP__
