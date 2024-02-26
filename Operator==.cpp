#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
		cout << "Конструктор сработал " << this << endl;
	}
	~Point() {
		cout << "Деструктор сработал " << this << endl;
	}
	bool operator == (Point& title) {
		if (this->x == title.x && this->y == title.y) {
			return true;
		}
		else
			return false;
	}
};


int main() {
	setlocale(LC_ALL, "Russian");
	Point one(2, 43);
	Point two(2, 43);

	bool run = one == two;
	cout << run << endl;

	return 0;
}