#include <iostream>
#include "ball.h"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Ball* def = new Ball();
    def->print();

    Ball* blue = new Ball("blue");
    blue->print();

    Ball* twenty = new Ball(20.0);
    twenty->print();

    Ball* blueTwenty = new Ball("blue", 20.0);
    blueTwenty->print();

    if (def != NULL)
    {
        delete def;
    }

    if (blue != NULL)
    {
        delete blue;
    }

    if (twenty != NULL)
    {
        delete twenty;
    }

    if (blueTwenty != NULL)
    {
        delete blueTwenty;
    }
    //Эта программа должна выдать следующий результат:

    //color: black, radius: 10
    //color: blue, radius: 10
    //color: black, radius: 20
    //color: blue, radius: 20


    return 0;
}
