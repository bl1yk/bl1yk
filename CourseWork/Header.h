#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

std::string RemoveTrailingZeros(const std::string& input) {
    std::string result = input;

    size_t found = result.find_last_not_of('0');
    if (found != std::string::npos && result[found] == '.')
        found--;

    result = result.substr(0, found + 1);

    return result;
}

class type1 {
public:
    string Get_answer() {
        return ("Ответом является любое значение Х");
    }
    string show() {
        return ("Уравнение 0 = 0");
    }
};

class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    string  Get_answer() {
        return ("Ответом является Х = 0");
    }
    string show() {
        return ("Уравнение " + (RemoveTrailingZeros(to_string(A))) + "*x^2 = 0");
    }
};

class type3 {
private:
    double C;
public:
    type3(double c1) {
        C = c1;
    }
    string  Get_answer() {
        return ("Корней нет");
    }
    string show() {
        return (RemoveTrailingZeros(to_string(C)) + " = 0");
    }
};

class type4 {
private:
    double A, C;
public:
    type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    string Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            return ("X1 = " + RemoveTrailingZeros(to_string(x1)) + " X2 = " + RemoveTrailingZeros(to_string(x2)));
        }
        else {
            return ("Корней нет");
        }
    }

    string  Get_answer_podbor() {
        if ((((-1) * C) / A) < 0) {
            return ("Корней методом подбора нет");
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            return ("Приближенно, один из корней уравнения: " + RemoveTrailingZeros(to_string(x)));
        }
    }

    string show() {
        return ("Уравнение " + RemoveTrailingZeros(to_string(A)) + "*x^2 + " + RemoveTrailingZeros(to_string(C)) + " = 0");
    }
};

class type5 {
private:
    double B, C;
public:
    type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    string Get_answer() {
        return ("Корень уравнения: " + RemoveTrailingZeros(to_string((-1) * (C / B))));
    }

    string Get_answer_podbor() {
        double min = abs(0 - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - B * (i)-C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        return ("Приближенно, один из корней уравнения: " + RemoveTrailingZeros(to_string(x)));
    }

    string show() {
        return  ("Уравнение " + RemoveTrailingZeros(to_string(B)) + "*x + " + RemoveTrailingZeros(to_string(C)) + " = 0");
    }
};

class type6 {
private:
    double A, B, C;
public:
    type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    string Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            return ("Уравнение не имеет действительных корней");
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                return ("Корень уравнения: " + RemoveTrailingZeros(to_string(x)));
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                return  ("X1 = " + RemoveTrailingZeros(to_string(x1)) + " X2 = " + RemoveTrailingZeros(to_string(x2)));
            }
        }
    }

    string Get_answer_podbor() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            return  ("Уравнение не имеет действительных корней");
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-B * i - C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            return  ("Приближенно, один из корней уравнения:" + RemoveTrailingZeros(to_string(x)));
        }
    }

    string show() {
        return ("Уравнение " + RemoveTrailingZeros(to_string(A)) + "*x^2 + " + RemoveTrailingZeros(to_string(B)) + "*x + " + RemoveTrailingZeros(to_string(C)) + " = 0");
    }
};

class type7 {
private:
    double B;
public:
    type7(double b1) {
        B = b1;
    }
    string Get_answer() {
        return ("Корень уравнения: x = 0");
    }
    string show() {
        return ("Уравнение " + RemoveTrailingZeros(to_string(B)) + "*x = 0");
    }

};

class type8 {
private:
    double A, B;
public:
    type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    string Get_answer() {
        double x = ((-1) * B) / A;
        return ("X1 = 0 X2 =" + RemoveTrailingZeros(to_string(x)));
    }

    string Get_answer_podbor() {
        double min = abs(0 - A * (-20) * (-20) - B * (-20));
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            if (i != 0) {
                double temp = abs(0 - A * i * i - B * (i));
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
        }
        return ("Приближенно, один из корней уравнения: " + RemoveTrailingZeros(to_string(x)));
    }

    string show() {
        return ("Уравнение " + RemoveTrailingZeros(to_string(A)) + "*x^2 + " + RemoveTrailingZeros(to_string(B)) + "*x = 0 ");
    }
};

