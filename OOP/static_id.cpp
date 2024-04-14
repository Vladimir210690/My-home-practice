#include <iostream>
#include <string>

using namespace std;

class human {
private:
	string name;
	int age;
	int id;
public:
	static int number;
	human(string name, int age) {
		cout << "constructor completed " << this << endl;
		number++;
		id = number;
		this->name = name;
		this->age = age;
	}
	~human() {
		cout << "destructor completed " << this << endl;
	}
	void output() {
		cout << id << " " << name << " " << age << endl;
	}
};
int human::number = 0;


int main() {

	string name;
	int age;
	cout << "you name: ";
	cin >> name;
	cout << "you age: ";
	cin >> age;
	human one(name, age);
	one.output();
	cout << "you name: ";
	cin >> name;
	cout << "you age: ";
	cin >> age;
	human two(name, age);
	two.output();

	cout << human::number << endl;

	return 0;
}