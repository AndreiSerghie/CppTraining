/************************************************************************************/
/*** INCLUDES ***********************************************************************/
/************************************************************************************/
#include <iostream>
#include <fstream>
#include <string>

#include "BasicMath.h"
#include "Print.h"
/************************************************************************************/
/*** CONSTANTS **********************************************************************/
/************************************************************************************/
#define NO_MATH_OPERATIONS 4
/************************************************************************************/
/*** ENUMERATIONS *******************************************************************/
/************************************************************************************/
enum eMathOperations
{
    AdditionOperation = 0,
    SubtractionOperation = 1,
    MultiplicationOperation = 2,
    DivisionOperation = 3
};
/************************************************************************************/
/*** MAIN FUNCTION ******************************************************************/
/************************************************************************************/
int main()
{
    // Create three Basic Math objects
    math::BasicMath LHS_Term;
    math::BasicMath RHS_Term;
    math::BasicMath Result;

    std::ifstream InputFile("D:/cpp_project/calculator/Calculator/calc.in"); // Create an ifsream object and call the constructor
    std::ofstream OutputFile("D:/cpp_project/calculator/Calculator/calc.out"); // Creat an ofstream object and call the constructor

    std::string sTextLine, sFirstElement, sSecondElement, sMathOperations[NO_MATH_OPERATIONS] = {"+", "-", "*", "/"};

    int iMathOperationPositionInString;
    eMathOperations iDetectedMathOperation;

    print::ComputingStarted(); // Print a start message in the console

    while (std::getline(InputFile, sTextLine))
    {
        /* TODO: Escape the 'E-' and 'E+' strings from the input data */

        for (int i = 0; i < NO_MATH_OPERATIONS; i++)
        {
            if (sTextLine.find(sMathOperations[i]) != -1) /* Check if the math operation is found */
            {
                iMathOperationPositionInString = sTextLine.find(sMathOperations[i]);
                iDetectedMathOperation = static_cast<eMathOperations>(i); /* Store the index of the found element as the detected math operation */
            }
        }

        sFirstElement = sTextLine.substr(0, iMathOperationPositionInString);
        LHS_Term = atof(sFirstElement.c_str()); /* Convert the first element string to a double */

        sSecondElement = sTextLine.substr(iMathOperationPositionInString + 1, sTextLine.size());
        RHS_Term = atof(sSecondElement.c_str()); /* Convert the second element string to a double */

        switch (iDetectedMathOperation)
        {
        case AdditionOperation:
            Result = LHS_Term + RHS_Term;
            break;
        case SubtractionOperation:
            Result = LHS_Term - RHS_Term;
            break;
        case MultiplicationOperation:
            Result = LHS_Term * RHS_Term;
            break;
        case DivisionOperation:
            Result = LHS_Term / RHS_Term;
            break;
        default:
            break;
        }

        OutputFile << Result.GetExpressionTerm() << std::endl; /* Push the result into the output file (w/ a new line at the end) */
    }

    print::ComputingEnded(); // Print an end message in the console

    InputFile.close(); /* Close the input file */
    OutputFile.close(); /* Close the output file */
}
/************************************************************************************/
