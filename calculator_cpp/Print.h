#ifndef _PRINT_H_
#define _PRINT_H_

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

    void ObjectConstructor(void)
    {
        std::cout << "[INFO] Object is constructed!" << std::endl;
    }

    void ObjectDeconstructor(void)
    {
        std::cout << "[INFO] Object is deconstructed!" << std::endl;
    }
}

#endif // _PRINT_H_
