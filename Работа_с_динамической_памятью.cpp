#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int size = 0;
	cin >> size; // Создаю переменную для выделения определенного обьема оперативной памяти
	int* number = new int(size);

	for (int i = 1; i < size + 1; i++) { // Вывожуномера выделенных ячеек памяти
		cout << (number + i) << "\t";
		if (i % 5 == 0) { // Для удобства после каждой пятой ячейки перебрасываю курсор на следующую строку
			cout << endl;
		}
	}
	cout << endl << endl;

	for (int i = 1; i < size + 1; i++) { // Инициализирую выделенную память и вывожу значения
		//*(number + i) = rand() % 100 + 1;
		cout << *(number + i) << "\t";
		if (i % 5 == 0) {
			cout << endl;
		}
	}

	cout << endl;
	system("pause");

	delete number;
	return 0;
}
