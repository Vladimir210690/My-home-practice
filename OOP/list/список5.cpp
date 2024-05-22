#include <iostream>
#include <ctime>

using namespace std;

class list {
public:
	list();
	~list();
	void push_back(int data);
	void push_front(int data);
	void show();
	int get_count();

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
	srand(time(NULL));
	int numbers = 0;

	list first;
	
	while (numbers != 10) {
		first.push_back(rand() % 150);
		numbers++;
	}

	first.show();
	cout << "-------------------------" << endl;
	cout << first.get_count() << endl;
	
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

void list::push_front(int data)
{

}

void list::show() 
{
	node* run = this->head;
	for (int i = 0; i < get_count(); i++) {
		cout << run->data << endl;
		run = run->next;
	}
}

int list::get_count()
{
	return count;
}

void list::push_back(int data) 
{
	if (head == nullptr) {
		head = new node(data);
		count++;
	}
	else {
		node* go = this->head;
		while (go->next != nullptr) {
			go = go->next;
		}
		go->next = new node(data);
		count++;
	}
}