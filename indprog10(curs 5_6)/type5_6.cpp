#include "type5_6.h"
#include <iostream>

Type5::Type5(double b1, double c1)
{
    B = b1;
    C = c1;
}

void Type5::get_answer()
{
    double answer;
    answer = (-C) / B;
    std::cout << "Корень уравнения: " << -C / B << std::endl;
}

void Type5::show()
{
    std::cout << "Уравнение: " << B << "x" << " + " << C << " = 0" << std::endl;
}

Type6::Type6(double a1, double b1, double c1)
{
    A = a1;
    B = b1;
    C = c1;
}

void Type6::get_answer()
{
    double D;
    D = B * B - 4 * A * C;
    if (D == 0) {
        std::cout << "Уравнение имеет один корень: " << (-B) / (2 * A) << std::endl;
    }
    else
    {
        if (D > 0) {

            double x1, x2;
            x1 = (-B + sqrt(D)) / (2 * A);
            x2 = (-B - sqrt(D)) / (2 * A);

            std::cout << "Корни уравнения: " << std::endl << "x1 = " << x1 << std::endl << "x2 = " << x2 << std::endl;

        }
        else
        {
            std::cout << "D < 0, корней нет" << std::endl;
        }
    }
}

void Type6::show()
{
    std::cout << "Уравнение: " << A << "x^2 + " << B << "x + " << C << " = 0" << std::endl;
}