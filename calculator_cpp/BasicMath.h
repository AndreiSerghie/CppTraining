#ifndef _BASIC_MATH_H_
#define _BASIC_MATH_H_
/************************************************************************************/
/*** INCLUDES ***********************************************************************/
/************************************************************************************/
#include "Print.h"
/************************************************************************************/
/*** IMPLEMENTATION *****************************************************************/
/************************************************************************************/
namespace math
{
    typedef long double LD_t;

    class BasicMath
    {
    private:
        LD_t ExpressionTerm;
    public:

        /* Simple constructor which initialize the term with zero and calls a print function */
        BasicMath() :ExpressionTerm(0)
        {
            print::ObjectConstructor(SimpleContructor);
        }

        /* Parametrized constructor which initialize the term with a given argument and calls a print function */
        BasicMath(LD_t Argument) :ExpressionTerm(Argument)
        {
            print::ObjectConstructor(ParametrizedContructor);
        }

        /* Copy constructor which initialize an object of the same time and calls a print function */
        BasicMath(BasicMath& Argument)
        {
            ExpressionTerm = Argument.ExpressionTerm;
            print::ObjectConstructor(CopyConstructor);
        }

        LD_t GetExpressionTerm (void) const
        {
            return ExpressionTerm;
        }

        BasicMath operator + (const BasicMath& Argument)
        {
            BasicMath Result;
            Result.ExpressionTerm = ExpressionTerm + Argument.ExpressionTerm;
            return Result;
        }

        BasicMath operator - (const BasicMath& Argument)
        {
            BasicMath Result;
            Result.ExpressionTerm = ExpressionTerm - Argument.ExpressionTerm;
            return Result;
        }

        BasicMath operator * (const BasicMath& Argument)
        {
            BasicMath Result;
            Result.ExpressionTerm = ExpressionTerm * Argument.ExpressionTerm;
            return Result;
        }

        BasicMath operator / (const BasicMath& Argument)
        {
            BasicMath Result;
            Result.ExpressionTerm = ExpressionTerm / Argument.ExpressionTerm;
            return Result;
        }

        ~BasicMath() { print::ObjectDeconstructor(); }
    };
}

#endif // _BASIC_MATH_H_
/************************************************************************************/
