#include <iostream>
#include <ctime>

using namespace std;

class point {
private:	
public:
	int size;
	int* data;

	point(int size) {
		data = new int[size];
		for (int i = 0; i < size; i++) {
			data[i] = rand() % 10;
			cout << data[i] << endl;
		}
		cout << "constructor completed " << this << endl;
	}
	point (const point& other) {
		int* temp = new int[other.size];
		this->size = other.size;
		for (int i = 0; i < other.size; i++) {
			this->data[i] = other.data[i];
		}
		cout << "constructor copir completed " << this << endl;
	}
	~point() {
		delete[] data;
		cout << "destructor completed " << this << endl;
	}
};


int main() {
	int sizes = 0;
	srand(time(NULL));
	cout << "enter sizes: " << endl;
	cin >> sizes;
	system("cls");
	point a(sizes);
	point b(a);
	for (int i = 0; i < b.size; i++) {
		cout << b.data[i] << endl;
	}

	return 0;
}