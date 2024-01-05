#include <iostream>
#include <ctime>

using namespace std;

void InitMemory(int* arr, int const size) { // Функция инициализации массива
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand() % 10;
	}
}

void PrintMemory(int* arr, int const size) { // Функция вывода массива
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << "\t";
	}
	cout << endl << endl;
}

void CopirMemory(int* arr, int* brr, int size) { // Функция копирования массива
	for (int i = 0; i < size; i++) {
		*(brr + i) = *(arr + i);
	}
}

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Rusian");

	int size = 10;

	int* pn1 = new int[size];
	int* pn2 = new int[size];

	InitMemory(pn1, size);
	InitMemory(pn2, size);

	PrintMemory(pn1, size);
	PrintMemory(pn2, size);

	cout << "++++++++++++++++++++++++++++++++++++" << endl;

	delete[] pn2; // Обнуляем второй массив
	pn2 = new int[size] {}; // Переназначаем новую память для указателя
	PrintMemory(pn2, size); // Выводим масив с нулями

	CopirMemory(pn1, pn2, size); // Копируем первый массив во второй

	PrintMemory(pn2, size); // Выводим второй массив

	delete[] pn1;
	delete[] pn2;

	return 0;
}
