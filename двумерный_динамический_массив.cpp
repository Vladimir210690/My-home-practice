#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int rows = 0;
	int cols = 0;

	cout << "Input count rows: ";
	cin >> rows;
	cout << "Input count cols: ";
	cin >> cols;

	int** pntr = new int*[rows]; // Создаем массив указателей на массивы

	for (int i = 0; i < rows; i++) { // Создаем массивы для указателей, имитируя колонки
		pntr[i] = new int[cols];
	}
	///////////////////////////////////////////////////

	for (int i = 0; i < rows; i++) { // Заполнение и вывод двумерного динамического массива
		for (int j = 0; j < cols; j++) {
			pntr[i][j] = rand() % 100 + 1;
			cout << pntr[i][j] << "\t";
		}
		cout << endl;
	}

	///////////////////////////////////////////////////
	system("pause");
	for (int i = 0; i < rows; i++) { //Удаляем динамические массивы колоник
		delete[]pntr[i];
	}
    delete[] pntr; // Удаляем массив указателей на массивы

	return 0;
}