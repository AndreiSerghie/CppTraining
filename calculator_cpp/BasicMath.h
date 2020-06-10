#ifndef _BASIC_MATH_H_
#define _BASIC_MATH_H_

#include "Print.h"

namespace math
{
    class BasicMath
    {
    public:
        typedef long double LD_t; /* Use a short alias for the long double base type */
        LD_t FirstElement, SecondElement, Result;
        
        BasicMath()
        {
            /* Call ObjectConstructor function from print namespace upon object construction */
            print::ObjectConstructor();
        }

        LD_t Add(const LD_t &refEl1, const LD_t &refEl2);
        LD_t Sub(const LD_t &refEl1, const LD_t &refEl2);
        LD_t Mul(const LD_t &refEl1, const LD_t &refEl2);
        LD_t Div(const LD_t &refEl1, const LD_t &refEl2);

        ~BasicMath()
        {
            /* Call ObjectDeconstructor function from print namespace upon object deconstruction */
            print::ObjectDeconstructor();
        }
    };
    
    LD_t BasicMath::Add(const LD_t &refEl1, const LD_t &refEl2)
    {
        return refEl1 + refEl2;
    }
    
    LD_t BasicMath::Sub(const LD_t &refEl1, const LD_t &refEl2)
    {
        return refEl1 - refEl2;
    }
    
    LD_t BasicMath::Mul(const LD_t &refEl1, const LD_t &refEl2)
    {
        return refEl1 * refEl2;
    }
    
    LD_t BasicMath::Div(const LD_t &refEl1, const LD_t &refEl2)
    {
        return refEl1 / refEl2;
    }
}

#endif // _BASIC_MATH_H_
