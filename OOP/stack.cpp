#include <iostream>

using namespace std;

class Stack {
private:
    enum { // размер стека
        EMPTY = -1, FULL = 20 
    };
    int st[FULL + 1]; // массив для стека, длиной на единицу больше максимального размера
    int top; // текущий размер стека
public:
    Stack();
    void Push(int c); // добавить элемент в стек
    int Pop(); // снять элемент с головы стека
    int GetCount(); // количество элементов в стеке
    void Clear(); // очистить стек
    bool IsEmpty(); // проверка стека на пустоту
    bool IsFull(); // проверка стека на заполнение
 
};

Stack::Stack() {
    top = EMPTY; // задаем текущий размер стека пустым
}
void Stack::Clear() { 
    top = EMPTY;  // очищаем стек
}

bool Stack::IsEmpty() { 
    return top == EMPTY; // проверка стека на пустоту
}

bool Stack::IsFull() { // проверка стека на заполнение
    return top == FULL;
}

int Stack::GetCount() { 
    return top + 1; // возвращает количество элементов в стеке
}

void Stack::Push(int c) {
    if (!IsFull()) {
        st[++top] = c; // добавляем элемент в стек
    } 
}

int Stack::Pop() {
    if (!IsEmpty()) { 
        return st[top--]; // вытаскиваю элемент из стека
    }
    else
        return 0;
}

int main()
{
    Stack first;

    first.Push(4);
    first.Push(45);
    first.Push(17);
    cout << "---------------------------------------" << endl;
    cout << first.Pop() << endl;
    cout << first.Pop() << endl;
    cout << first.Pop() << endl;

    return 0;
}