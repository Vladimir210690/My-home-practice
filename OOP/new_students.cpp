#include <iostream>
#include <string>

using namespace std;

class students {
private:
	char* name = new char[20];
	int age;
public:
	students() {
		cout << "constructor completed " << this << endl;
		cout << "enter you name: ";
		cin >> name;
		cout << "enter you age: ";
		cin >> age;
	}
	students(const students& other) {
		cout << "constructor copir completed " << this << endl;
		this->age = other.age;
	
		int a = strlen(other.name);
		for (int i = 0; i < a; i++) {
			this->name[i] = other.name[i];
		}
	}
	students(students&& other) : name(other.name), age(other.age){
		cout << "constructor perenos completed " << this << endl;
	}
	~students() {
		cout << "destructor completed " << this << endl;
		delete[] name;
	}

	void print() {
		cout << "you name: " << name << " you age: " << age << endl;
	}
};


int main() {
	
	students first;
	first.print();

	cout << endl;

	students second(first);
	second.print();
	

	return 0;
}