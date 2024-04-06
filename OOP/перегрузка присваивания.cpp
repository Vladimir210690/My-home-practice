#include <iostream>

using namespace std;

class game {
public:
	int level;
	int speed;
	game(int l, int s) {
		cout << "constructor completed: " << this << endl;
		this->level = l;
		this->speed = s;
	}
	~game() {
		cout << "destructor completed: " << this << endl;
	}
	game & operator =(const game& other) {
		this->level = other.level;
		this->speed = other.speed;
		return *this;
	}

};


int main() {

	game a(4,45);

	game b(1, 6);

	game c(58, 6);

	c = b = a;

	cout << c.level << " " << c.speed << endl;

	return 0;
}