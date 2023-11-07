#include <iostream>

int main()
{
	setlocale(0, "");
	short int a, b, itog;
	std::cout << "Введите певое число:" << std::endl; 
	std::cin >> a;
	std::cout << "Введите второе число:" << std::endl;
	std::cin >> b;
	std::cout << "Введите ответ умножения чисел:" << std::endl;
	std::cin >> itog;
	if (itog == a * b) 
	{
		std::cout << "Правильно";
	}
	else std::cout << "нет, правильный ответ это >> " << a * b;
	return 0;
}

