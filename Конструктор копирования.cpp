#include <iostream>

using namespace std;

class Figure {
public:
	int number;
	Figure(int number) {
		this->number = number;
		cout << this->number << " Конструктор сработал " << this << endl;
	}
	~Figure() {
		cout << this->number << " Деструктор сработал " << this << endl;
	}
};

void Copir(Figure set) {
	
	set.number = 4;
}


int main() {
	setlocale(LC_ALL, "Russian");

	Figure Cub(1);
	Copir(Cub);

	return 0;
}