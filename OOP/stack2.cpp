#include <iostream>

using namespace std;

class Stack {
private:
    enum { // размер стека
        EMPTY = 0, FULL = 20
    };
    int st[FULL]; // массив для стека, длиной на единицу больше максимального размера
    int top; // текущий размер стека
public:
    Stack() {
        top = EMPTY; // задаем пустой размер стека
    };

    void Push(int c) {
        if (!IsFull()) { // добавить элемент в стек
            st[top] = c;
            top++;
        }
    }; 

    int Pop() {
        if (!IsEmpty()) { // снять элемент с головы стека
            int number = st[--top];
            
            return number;
        }
        else
            return 0;
    }; 

    int GetCount() {
        return top; // количество элементов в стеке
    }; 

    void Clear() {
        top = EMPTY; // очистить стек
    }; 

    bool IsEmpty() {
        return top == EMPTY; // проверка стека на пустоту
    }; 

    bool IsFull() {
        return top == FULL; // проверка стека на заполнени
    }; 

    void show() {
        if (!IsEmpty()) {
            for (int i = 0; i < top; i++) {
                cout << st[i] << " ";
            }
            cout << endl;
        }
    }; // показать все элементы стека
  
};


int main()
{
    srand(time(NULL));
    Stack first;

    first.Push(4);
    first.Push(45);
    first.Push(17);
    first.Push(38);
    /*first.init();*/
    cout << first.GetCount() << endl;
    cout << "---------------------------------------" << endl;
    first.show();
    cout << "---------------------------------------" << endl;
    cout << first.Pop() << endl;
    cout << first.Pop() << endl;
    cout << first.Pop() << endl;
    cout << first.Pop() << endl;
    cout << "---------------------------------------" << endl;
    cout << first.GetCount() << endl;

    return 0;
}