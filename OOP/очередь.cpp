#include <iostream>

using namespace std;

class Qe {
private:
	int* arr;
	int min;
	int max;
public:
	Qe(int number) {
		cout << "Конструктор сработал: " << this << endl;
		min = 0;
		max = number;
		arr = new int[max];
	}
	~Qe() {
		cout << "Деструктор сработал: " << this << endl;
		delete[] arr;
	}
	bool qe_min() {
		return min == 0;
	}
	bool qe_max() {
		return min == max;
	}
	void qe_push(int item) {
		if (!qe_max()) {
			
			arr[min] = item;
			min++;
		}
	}
	int qe_pop() {
		if (!qe_min()) {
			int temp = arr[0];
			for (int i = 0; i < min; i++) {
				arr[i] = arr[i + 1];
			}
			return temp;
		}
		else
			return 0;
	}
	void qe_show() {
		for (int i = 0; i < min; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Ru");
	int num = 0;
	cout << "Укажите размер очереди: ";
	cin >> num;
	Qe first(num);
	cout << first.qe_min() << endl;
	cout << first.qe_max() << endl;
	cout << "-------------------------------------" << endl;
	
	first.qe_push(5);
	first.qe_push(26);
	first.qe_push(11);
	cout << "-------------------------------------" << endl;
	first.qe_show();
	cout << first.qe_max() << endl;
	cout << "-------------------------------------" << endl;
	cout << first.qe_pop() << endl;
	cout << first.qe_pop() << endl;
	cout << first.qe_pop() << endl;

	return 0;
}