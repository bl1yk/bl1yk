#include "type3_4.h"
#include <iostream>

int main() {


	std::cout << "Введите коэффициент уравнения С для уравнения 3-го типа: "; int val; std::cin >> val;
	std::cout << "Введите коэффициенты уравнения А и C для уравнения 4-го типа: "; int _A, _C; std::cin >> _A >> _C;

	type3 first(val);
	first.show();
	first.get_answer();

	type4 second(_A, _C);
	second.show();
	second.get_answer();

}