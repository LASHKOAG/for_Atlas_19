#ifndef TEST_CLASS_H
#define TEST_CLASS_H
#include <string>

class Test_class
{
public:
    Test_class();
    Test_class(int km);

    void set_distance(int user_distance);
    int get_distance();

    void set_money(float user_money);
    float get_money(float user_money);

    void set_name(std::string user_name);
    std::string get_name();
private:
    int distance{5};
    float money{2.40};
    std::string name{"none"};
};

#endif // TEST_CLASS_H
