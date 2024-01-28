#include <iostream>
#include <string>

using namespace std;

struct Grupp {
	int age;
	int phone;
	string name;
	Grupp* next;
};

struct Head {
	int size;
	Grupp* first;
};

void push_front(Head* list, int age, int phone, string name) {
	Grupp* node = new Grupp;
	node->age = age;
	node->phone = phone;
	node->name = name;
	node->next = list->first;
	list->first = node;
	list->size++;
}

void print(Head* list) {
	Grupp* group = list->first;
	while (group != nullptr) {
		cout << group->age << "\t" << group->phone << "\t" << group->name << endl;
		group = group->next;
	}
}

int main() {

	Head General;
	General.size = 0;
	General.first = nullptr;
	string name = "sughsiugh";
	push_front(&General, 12, 8197364, name);
	print(&General);
	return 0;
}