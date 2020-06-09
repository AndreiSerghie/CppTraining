#ifndef _BASIC_MATH_H_
#define _BASIC_MATH_H_

#include "Print.h"

namespace math
{
    class BasicMath
    {
    public:
        typedef long double LD_t;
        LD_t FirstElement, SecondElement, Result;
        
        /* Call ObjectConstructor function from print namespace upon object construction */
        BasicMath() { print::ObjectConstructor(); }

        LD_t Add(const LD_t &refEl1, const LD_t &refEl2) { return refEl1 + refEl2; }
        LD_t Sub(const LD_t &refEl1, const LD_t &refEl2) { return refEl1 - refEl2; }
        LD_t Mul(const LD_t &refEl1, const LD_t &refEl2) { return refEl1 * refEl2; }
        LD_t Div(const LD_t &refEl1, const LD_t &refEl2) { return refEl1 / refEl2; }

        /* Call ObjectDeconstructor function from print namespace upon object deconstruction */
        ~BasicMath() { print::ObjectDeconstructor(); }
    };
}

#endif // _BASIC_MATH_H_
