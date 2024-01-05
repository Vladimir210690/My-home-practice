#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));

	int size = 0;
	int a = 0;
	bool flag = false;
	int col = 0;
	
	cout << "Укажите размер массива: ";
	cin >> size;
	cout << endl;

	int* pn = new int[size];

	for (int i = 0; i < size; i++) {
		*(pn + i) = rand() % 100 + 1;
		cout << *(pn + i) << "\t";
	}
	cout << endl << endl;

	for (int j = 0; j < size; j++) {
		flag = false;
		for (int i = 0; i < size - 1; i++) {
			if (*(pn + i) > *(pn + (i + 1))) {
				a = *(pn + i);
				*(pn + i) = *(pn + (i + 1));
				*(pn + (i + 1)) = a;
				col += 1;
				flag = true;
			}
			a = 0;
		}
		if (flag == false) {
			break;
		}
	}
	for (int i = 0; i < size; i++) {
		cout << *(pn + i) << "\t";
	}
	cout << endl << endl;
	cout << "Количество проходов: " << col << endl;

	delete[] pn;

	return 0;
}