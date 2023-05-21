#include "test_class.h"

Test_class::Test_class()
{

}

Test_class::Test_class(int km):distance{km}
{

}

void Test_class::set_distance(int user_distance)
{
    if (user_distance >= 0){
        distance = user_distance;
    }
}

int Test_class::get_distance()
{
    return distance;
}

void Test_class::set_money(float user_money)
{
    if (user_money > 0){
        money = user_money;
    }
}

float Test_class::get_money(float user_money)
{
    return money;
}

void Test_class::set_name(std::string user_name)
{
    //char fgfg[] = "sdfsdfdsfs"

    if (user_name != "none"){
        name = user_name;
    }
}

std::string Test_class::get_name()
{
    return name;
}
