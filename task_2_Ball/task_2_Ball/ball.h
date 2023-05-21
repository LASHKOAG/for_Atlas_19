#ifndef BALL_H
#define BALL_H

//Обновите следующую программу,
//чтобы использовать инициализацию нестатических членов и
//списки инициализаторов членов.

#include <string>
#include <iostream>


class Ball
{
public:
    // Конструктор по умолчанию без параметров
    Ball();


    // Конструктор только с параметром цвета
    // (радиус будет использовать значение по умолчанию)
    Ball(const std::string &color);

    // Конструктор только с параметром радиуса
    // (цвет будет использовать значение по умолчанию)
    Ball(double radius);

    // Конструктор с параметрами и цвета, и радиуса
    Ball(const std::string &color, double radius);

    void print();

private:
    std::string m_color{"black"};
    double m_radius{10};

};

#endif // BALL_H
