#include <iostream>

using namespace std;

class stack {
private:
	enum{min = 0, max = 20}; // перечисление размеров стека
	int* arr;
	int item; // позиция головы стека
public:
	stack() { 
		cout << "Конструктор сработал " << this << endl;
		item = 0; // задаем голову в нулевой позиции
		arr = new int[max];
	}
	~stack() {
		cout << "Деструктор сработал " << this << endl;
		delete[] arr;
	}

	bool Min() { // проверяем стек на пустоту
		return min == item;
	}
	bool Max() { // проверяем стек на заполнение
		return max == item;
	}
	void Printf(int number) { // добавляем число в стек
		if (!Max()) {
			arr[item] = number;
			item++;
		}
		else {
			cout << "Стек полон, нельзя добавить новый элемент " << endl;
		}
	}
	int Scanf() { // извлекаем последнее введенное число из стека
		if(!Min()) {
			item--;
			return arr[item];
		}
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	stack first;
	cout << first.Min() << endl;
	cout << first.Max() << endl;
	cout << "---------------------------------------" << endl;

	first.Printf(12);
	first.Printf(8);
	first.Printf(28);
	first.Printf(3);

	cout << first.Scanf() << endl;
	cout << first.Scanf() << endl;
	cout << first.Scanf() << endl;
	cout << first.Scanf() << endl;
	cout << "---------------------------------------" << endl;

	return 0;
}