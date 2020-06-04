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

        LD_t Add(LD_t *ptEl1, LD_t *ptEl2) { return (*ptEl1) + (*ptEl2); }
        LD_t Sub(LD_t *ptEl1, LD_t *ptEl2) { return (*ptEl1) - (*ptEl2); }
        LD_t Mul(LD_t *ptEl1, LD_t *ptEl2) { return (*ptEl1) - (*ptEl2); }
        LD_t Div(LD_t *ptEl1, LD_t *ptEl2) { return (*ptEl1) - (*ptEl2); }

        /* Call ObjectDeconstructor function from print namespace upon object deconstruction */
        ~BasicMath() { print::ObjectDeconstructor(); }
    };
}

#endif // _BASIC_MATH_H_
