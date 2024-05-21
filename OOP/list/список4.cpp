#include <iostream>

using namespace std;

class list {
public:
	list();
	~list();
	void push_back(int data) {
		if (head == nullptr) {
			head = new node(data);
		}
		else {
			node* go = this->head;
			while (go->next != nullptr) {
				go = go->next;
			}
			go->next = new node(data);
		}

	}

private:
	class node {
	public:
		int data;
		node* next;
		node(int temp, node* pnext = nullptr) {
			this->data = temp;
			this->next = pnext;
		}
	};
	node* head;
	int count;
};

int main() {
	setlocale(LC_ALL, "RU");
	list first;
	first.push_back(8);
	first.push_back(14);
	

	return 0;
}

list::list()
{
	cout << "Конструктор сработал " << this << endl;
	head = nullptr;
	count = 0;
}

list::~list()
{
	cout << "Деструктор сработал " << this << endl;
}