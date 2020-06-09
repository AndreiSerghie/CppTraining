#ifndef _PRINT_H_
#define _PRINT_H_

using namespace std;

namespace print
{
    void ComputingStarted(void) { cout << "[INFO] Computing started!" << endl; }
    void ComputingEnded(void) { cout << "[INFO] Computing ended!" << endl; }
    void ObjectConstructor(void) { cout << "[INFO] Object is constructed!" << endl; }
    void ObjectDeconstructor(void) { cout << "[INFO] Object is deconstructed!" << endl; }
}

#endif // _PRINT_H_
