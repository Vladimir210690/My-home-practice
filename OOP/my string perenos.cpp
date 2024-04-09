#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>
//#include <math.h>

using namespace std;

class String {
private:
	static const int max_znach = 80;
	char* data;
	int lenth;
public:
	String() {
		data = new char[max_znach];
		lenth = max_znach;
	}
	String(int size) {
		cout << "constructor completed " << this << endl;
		data = new char[size];
		lenth = size;
	}
	String(const char* str) {
		lenth = strlen(str);
		data = new char[lenth];
		strcpy(data, str);
	}
	String(const String& obg) {
		cout << "constructor copir completed " << this << endl;
		lenth = obg.lenth;
		data = new char[lenth];
		strcpy(data, obg.data);
	}
	String(String&& other) : data{ other.data }, lenth{other.lenth} { // Конструктор перемещения
		cout << "constructor perenos completed " << this << endl;
		for (int i = 0; i < lenth; i++) {
			data[i] = other.data[i];
		}
		other.data = nullptr;
		other.lenth = 0;
	}
	~String() {
		cout << "destructor completed " << this << endl;
		delete[] data;
	}

	void input() {
		cout << "enter string: ";
		cin.getline(data, lenth);
	}

	void print()const {
		cout << "you string: " << data << endl;
	}
};

int main() {

	String title;
	title.input();
	title.print();
	cout << endl;
	String second = move(title);
	
	title.print();
	cout << endl;
	second.print();

	return 0;
}