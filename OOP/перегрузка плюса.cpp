#include <iostream>

using namespace std;

class drobe {
private:
	int up;
	int down;
public:
	drobe() {
		up = 0;
		down = 0;
		cout << "Constructor completed" << endl;
	}
	drobe(int a, int b) {
		up = a;
		down = b;
		cout << "Constructor completed" << endl;
	}
	~drobe() {
		cout << "Destructor completed" << endl;
	}
	drobe operator +(drobe& other) {
		drobe time;
		time.up = this->up + other.up;
		time.down = this->down + other.down;
		return time;
	}
	void output() {
		cout << up << " " << down << endl;
	}
	int get_up() {
		return up;
	}
	int get_down() {
		return down;
	}
};

int main() {
	int a, b;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	drobe aa(a, b);
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	drobe bb(a, b);

	drobe c =  aa + bb;
	cout << "Up = " << c.get_up() << " Down = " << c.get_down() << endl;

	return 0;
}