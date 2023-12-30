#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	long long size = 0;
	cout << "Сколько выделить памяти?: ";
	cin >> size;

	int* pntr = new int[size];

	for (int i = 0; i < size; i++) {
		*(pntr + i) = rand() % 100 + 1;
		cout << pntr + i << "\t" << *(pntr + i) << endl;
	}

	system("pause");
	delete[]pntr;




	return 0;
}