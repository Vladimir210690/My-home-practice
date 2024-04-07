#include <iostream>
#include <ctime>

using namespace std;

class point {
private:
	int arr[5];
public:
	point() {
		cout << "constructor completed! " << endl;
		for (int i = 0; i < 5; i++) {
			arr[i] = rand() % 10;
			cout << arr[i] << endl;
		}
	}
	~point() {
		cout << "destructor completed! " << endl;
	}
	int& operator [](int index) {
		return arr[index];
	}
};


int main() {
	srand(time(NULL));

	point a;

	cout << "\n" << "index: " << a[3] << endl;
	a[3] = 50;
	cout << "\n" << "index: " << a[3] << endl;

	return 0;
}