#include <iostream>
#include <string>

using namespace std;

class People { // Создаем класс для таблицы
public:
	int age;
	int weight;
	int hight;
	string name;

	void Input() {
		cout << "Input you data:" << endl;
		cout << "Input name: ";
		cin >> name;
		cout << "Input age: ";
		cin >> age;
		cout << "Input weight: ";
		cin >> weight;
		cout << "Input hight: ";
		cin >> hight;
		cout << endl;
		system("cls");
	}
	void Print() {
		cout << "Name: " << name << " Age: " << age << " Weight: " << weight << " Hight: " << hight << endl;
		cout << "----------------------------------------------------------------------" << endl;
	}
};


int main() {

	People First;
	People Second;
	People Third;

	First.Input();
	Second.Input();
	Third.Input();

	First.Print();
	Second.Print();
	Third.Print();

	return 0;
}
