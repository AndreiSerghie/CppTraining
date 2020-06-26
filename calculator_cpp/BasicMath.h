#ifndef _BASIC_MATH_H_
#define _BASIC_MATH_H_

#include "Print.h"

#define USE_OPERATOR_OVERLOADING TRUE

namespace math
{
    class BasicMath
    {
    public:
        typedef long double LD_t;
        LD_t FirstElement, SecondElement, Result;

        BasicMath() { print::ObjectConstructor(); }

        LD_t Add(const LD_t &refEl1, const LD_t &refEl2) { return refEl1 + refEl2; }
        LD_t Sub(const LD_t &refEl1, const LD_t &refEl2) { return refEl1 - refEl2; }
        LD_t Mul(const LD_t &refEl1, const LD_t &refEl2) { return refEl1 * refEl2; }
        LD_t Div(const LD_t &refEl1, const LD_t &refEl2) { return refEl1 / refEl2; }

#if USE_OPERATOR_OVERLOADING == TRUE
        /* Operator overloading */
        LD_t operator+() { return FirstElement + SecondElement; }
        LD_t operator-() { return FirstElement - SecondElement; }
        LD_t operator*() { return FirstElement * SecondElement; }
        LD_t operator/(LD_t temp)
        {
            temp = FirstElement / SecondElement;
            return temp;
        }
#endif


        ~BasicMath() { print::ObjectDeconstructor(); }
    };
}

#endif // _BASIC_MATH_H_

