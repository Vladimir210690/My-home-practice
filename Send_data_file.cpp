#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int a = 0;
	ofstream send;
	send.open("MyFile.txt",ofstream::app);

	for (int i = 0; i < 10; i++) {
		cout << "Input data";
		cin >> a;
		send << a << endl;
	}

	return 0;
}