#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

void Time(int s, int m, int h) { //Функция для вывода секундомера
	cout << "Текущее время = " << h << " : " << m << " : " << s << endl << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int sec = 0, min = 0, hour = 0; // Переменные отвечающие за показатели времени
	int go = 0; // Переменная запуска таймера
	
	cout << "Запустить секундомер? 0 - да, 1 - нет" << endl;
	cin >> go; // Запрашиваем от пользователя разименованный указатель

	while (go == 0) {  // Вечный цикл времени, остановка будет в обновлении
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
		if (_kbhit()) { // Отслеживаем нажатие клавиши с клавиатуры
			_getch(); // Останавливаем консоль
			cout << "Пауза! Чтобы продолжить нажмите 0, чтобы выйти и сохранить нажмите 1: ";
			cin >> go;
		}
	}
	return 0;
}