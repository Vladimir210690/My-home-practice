#include <iostream>
#include <fstream> // Библиотека имеющая в себе классы, работающие с файлами

using namespace std;

int main() {
	int a = 0;
	ofstream send; // Класс включающий метод сохранения информации в файл
	send.open("MyFile.txt",ofstream::app);

	for (int i = 0; i < 10; i++) {
		cout << "Input data";
		cin >> a;
		send << a << endl;
	}

	return 0;
}
