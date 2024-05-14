#include <iostream>

using namespace std;

class list {
private:
    class node {
        int data;
        node* next;

        node(int data, node * node = nullptr) {
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
    int item; // количество ячеек в списке
    list() {
        cout << "Конструктор сработал: " << this << endl;
    }
    ~list() {
        cout << "Деструктор сработал: " << this << endl;
    }

    void push_front(int data) {
       
    }
    void push_back(int data) {

    }
};



int main()
{
    setlocale(LC_ALL, "Russian");
    list name;


    return 0;
}