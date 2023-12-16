#include <iostream>
using namespace std;

void Swap(int*pa, int*pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

int main() {
	int a = 5;
	int b = 7;

	cout << a << "\t" << b << endl << endl;

	Swap(&a, &b);

	cout << a << "\t" << b << endl << endl;

	return 0;
}