#include "myclass.h"

MyClass::MyClass()
{

}

MyClass::MyClass(int _user_distance):distance{_user_distance}
{

}

void MyClass::myPrint()
{
    std::cout << "distance: " << distance << std::endl;
    std::cout << "a: " << a << std::endl;
}

void MyClass::set_x(int user_x)
{
    if(user_x > 0 ){
        x = user_x;
    }


}

int MyClass::get_x()
{
    if(x < 0){
        x = 0;
    }

    return x;
}

void MyClass::set_a(int user_a)
{
    if (user_a != NULL){
        a = user_a;
    }
}

int MyClass::get_a()
{
    return a;
}


