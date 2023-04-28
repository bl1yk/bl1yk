#include <iostream>

class type3
{
private:

    double a;

public:

    type3(double _a) {
        a = _a;
    }
    void get_answer() {
        if (a != 0)
        {
            std::cout << "Решений уравнения нет" << std::endl;
        }
        else
        {
            std::cout << "Решением уравнения ялвяется любое число х" << std::endl;
        }
    }
    void show() {
        std::cout << "Уравнение: " << a << " = 0" << std::endl;
    }

};

class type4
{
private:
    double b, c;
public:
    type4(double _b, double _c) {
        b = _b;
        c = _c;
    }
    void get_answer() {
        double right, answer;
        right = c * (-1) / b;
        if (right <= 0)
        {
            std::cout << "Корней нет";
        }
        else
        {
            answer = sqrt(right);
            std::cout << "Решения уравнения: x1 = " << answer << " x2 = " << answer * (-1) << std::endl;
        }
    }

    void show() {
        std::cout << "Уравнение: " << b << "x^2 + " << c << " = 0" << std::endl;
    }
};