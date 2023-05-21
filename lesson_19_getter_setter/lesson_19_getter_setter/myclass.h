#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>


class MyClass
{
public:
    MyClass();
    MyClass(int _user_distance);

    int distance{5};

    void myPrint();

    void set_x(int user_x);
    int get_x();

    void set_a(int user_a);
    int get_a();

private:
    int x{0};

    int a{0};
};

#endif // MYCLASS_H
