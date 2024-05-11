#include <iostream>

using namespace std;

template<typename T>
class List {
public:

	List();
	~List();
	void push_back(T date);

private:

	template<typename T>
	class Node {
	public:

		Node* pNext;
		T date;

		Node(T date = T(), Node*pNext = nullptr) {
			this->date = date;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T>*head;
};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{

}

template<typename T>
void List<T>::push_back(T date)
{
	if (head == nullptr)
	{
		head = new Node(date);
	}
}

int main() {
	setlocale(LC_ALL, "RUS");

	List<int> lst;
	lst.push_back(4);


	return 0;
}