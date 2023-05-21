#include "ball.h"

// Конструктор по умолчанию без параметров
Ball::Ball()
{
}

// Конструктор только с параметром цвета
// (радиус будет использовать значение по умолчанию)
Ball::Ball(const std::string &color):m_color{color}
{
}

// Конструктор только с параметром радиуса
// (цвет будет использовать значение по умолчанию)
Ball::Ball(double radius):m_radius{radius}
{
}

// Конструктор с параметрами и цвета, и радиуса
Ball::Ball(const std::string &color, double radius):m_color{color},m_radius{radius}
{
}

void Ball::print()
{
    std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
}
