#ifndef _PRINT_H_
#define _PRINT_H_
/************************************************************************************/
/*** ENUMERATIONS *******************************************************************/
/************************************************************************************/
enum ConstructorType
{
    SimpleContructor,
    ParametrizedContructor,
    CopyConstructor
};
/************************************************************************************/
/*** IMPLEMENTATION *****************************************************************/
/************************************************************************************/
namespace print
{

    void ComputingStarted(void)
    {
        std::cout << "[INFO] Computing started!" << std::endl;
    }

    void ComputingEnded(void)
    {
        std::cout << "[INFO] Computing ended!" << std::endl;
    }

    void ObjectConstructor(ConstructorType Type)
    {
        if (Type == SimpleContructor)
        {
            std::cout << "[INFO] Object is constructed! | Constructor type: Simple" << std::endl;
        }
        else if (Type == ParametrizedContructor)
        {
            std::cout << "[INFO] Object is constructed! | Constructor type: Parametrized" << std::endl;
        }
        else
        {
            std::cout << "[INFO] Object is constructed! | Constructor type: Copy constructor" << std::endl;
        }
    }

    void ObjectDeconstructor(void)
    {
        std::cout << "[INFO] Object is destroyed!" << std::endl;
    }
}

#endif // _PRINT_H_
/************************************************************************************/
