#include <iostream>
#include <string>

using namespace std;

template <typename ki> // Обьявление переменной для шаблонной функции
void Foo(ki &x, ki &y) {
	ki g = x;
	x = y;
	y = g;
}

int main() {
	setlocale(LC_ALL, "RU");

	string a = "Vova";
	string b = "Kolia";
	double c = 76.1;
	double d = 4;

	cout << a << "\t" << b << endl;
	cout << c << "\t" << d << endl;
	cout << endl;
	Foo(a, b);
	Foo(c, d);
	cout << a << "\t" << b << endl;
	cout << c << "\t" << d << endl;

	return 0;
}
