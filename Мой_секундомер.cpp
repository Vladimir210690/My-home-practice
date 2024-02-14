#include <iostream>
#include <Windows.h>

using namespace std;

void Time(int s, int m, int h) { //Функция для вывода секундомера
	cout << "This time = " << h << " : " << m << " : " << s << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int sec = 0, min = 0, hour = 0; // Переменные отвечающие за показатели времени

	while (true) {  // Вечный цикл времени, остановка будет в обновлении
		system("cls");
		Time(sec, min, hour);
		Sleep(950); // Замедление консоли, для имитации течения времени
		sec++;
		if (sec == 60) {
			min++;
			sec = 0;
		}
		else if (min == 60) {
			hour++;
			min = 0;
		}
	}
	return 0;
}