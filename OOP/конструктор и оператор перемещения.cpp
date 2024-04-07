#include <iostream>

using namespace std;

class Test2
{
private:
    

public:
    int size = 8;

    Test2() {

    }
   /* explicit Test2(int value = 0) : value(new int(value)){

        cout << "Test2::Test2() created" << endl;
    }*/

    //~Test2(){

    //    delete[] value;
    //    cout << "Test2::~Test2() destroyed" << endl;
    //}


    Test2(Test2&& other) noexcept : size{ other.size }
    {
        other.size = 0;
        cout << "Move constructor called" << endl;
    }
  
    Test2& operator=(Test2&& other) noexcept {

        size = other.size;
        other.size = 0;
        cout << "Move assignment operator called" << endl;
        return *this;
    }
};

int main()
{
    Test2 t1; 
   
    Test2 t2 = move(t1); // вызов конструктора перемещения
    t1 = move(t2); // вызов оператора перемещения

    cout << t1.size << " " << t2.size << endl;


    return 0;
}