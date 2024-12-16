#include <iostream>
#include <cmath>
int main (void) {
	bool exit = true;
	double weight {0.0}, height {0.0};
	setlocale (LC_ALL, "ru_RU.UTF-8");
	while (exit) {
		std :: cout << "Введите вес в килограммах: ___\b\b\b";
		std :: cin >> weight;
		std :: cout << "Введите рост в сантиметрах: ___\b\b\b";
		std :: cin >> height;
		std :: cout << "Body mass index: " << weight / pow(height, 2.0) * 10'000;
		std :: cout << "\nХотите выйти 1(yes) или 0(no) _?\b\b";
		std :: cin >> exit;
	}
	return 0;
}
