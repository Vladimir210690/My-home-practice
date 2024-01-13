#include <iostream>

using namespace std;

const char* CONCAT(const char *first,const char *second) {
	
	int i = 0; // Счетчик символов первого массива
	int j = 0; // Счетчик символов второго масива

	for (;; i++) { // Считаем количество символов в первом слове
		if (first[i] == '\0') {
			break;
		}
	}
	for (;; j++) { // Считаем количество символов во втором слове
		if (second[j] == '\0') {
			break;
		}
	}
	char* total = new char[i + j]; //Массив для нового слова
	for (int k = 0; k < i; k++) {
		total[k] = first[k];
	}
	for (int l = i, g = 0; l < (i + j); l++, g++) {
		total[l] = second[g];
	}
	total[i + j] = '\0';

	return total;
}


int main() {
	setlocale(LC_ALL, "Russian");

	char *title = new char[10];
	char *name = new char[10];

	cout << "Enter first word: ";
	cin >> title;
	cout << "Enter second word: ";
	cin >> name;

	cout << endl;

	cout << CONCAT(title, name);

	delete[] title;
	delete[] name;

	return 0;
}