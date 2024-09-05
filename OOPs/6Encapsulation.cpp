#include<iostream>
using namespace std;

// Encapsulation: wrapping up or combining multiple data into a single unit is called encapsulation. ex: in Encapsulation class multiple data members are combined into a single unit.


class Encapsulation{
    private:
    int a, b, c; 

    public:
    // constructor
    Encapsulation(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    // Member function
    int add(){
        return a+b+c;
    }

    int multiply(){
        return a*b*c;
    }

};

int main()
{
    Encapsulation obj(12,23,45);
    cout << obj.add() << endl;
    cout << obj.multiply() << endl;
    return 0;
}