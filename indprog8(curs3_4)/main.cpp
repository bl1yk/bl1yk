#include "type3_4.h"
#include <iostream>

int main() {


	std::cout << "������ �����樥�� �ࠢ����� � ��� �ࠢ����� 3-�� ⨯�: "; int val; std::cin >> val;
	std::cout << "������ �����樥��� �ࠢ����� � � C ��� �ࠢ����� 4-�� ⨯�: "; int _A, _C; std::cin >> _A >> _C;

	type3 first(val);
	first.show();
	first.get_answer();

	type4 second(_A, _C);
	second.show();
	second.get_answer();

}