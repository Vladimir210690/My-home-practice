#include <iostream>

using namespace std;

class list {
private:
    class node {
    public:
        int data;
        node* next;

        node(int data = 0, node * node = nullptr) {
            cout << "Конструктор сработал: " << this << endl;
            this->data = data;
            this->next = node;
        }
        ~node() {
            cout << "Деструктор сработал: " << this << endl;
        }
    };
public:
    node* head; // указатель для поиска нужной позиции или конца списка
    int size; // количество ячеек в списке
    list() {
        size = 0;
        head = nullptr;
        cout << "Конструктор сработал: " << this << endl;
    }
    ~list() {
        cout << "Деструктор сработал: " << this << endl;
    }

    void push_front(int data) {
       
    }
    void push_back(int data) {
        if (head == nullptr) {
            head = new node(data);
        }
        else {
            node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = new node(data);
        }
    }
};



int main()
{
    setlocale(LC_ALL, "Russian");
    list name;
    name.push_back(4);
    name.push_back(15);
    name.push_back(8);

    return 0;
}