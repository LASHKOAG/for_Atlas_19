#include <iostream>
#include "myclass.h"

using namespace std;

int main()
{
    MyClass* test = new MyClass();
    MyClass* test2 = new MyClass(123);

    test->set_a(11);
    test->myPrint();
    test2->myPrint();

    if (test != NULL)
    {
        delete test;
    }

    if (test2 != NULL)
    {
        delete test2;
    }
    return 0;
}
