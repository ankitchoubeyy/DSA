#include<iostream>
using namespace std;

class Calculator{
    private:
    int a,b;
    public:
    // Default Constructor
    Calculator(){
        cout << "Default constructor is called." << endl;
    }
    // Parameterised Constructor
    Calculator(int num1, int num2){
        a = num1;
        b = num2;
        cout << "Parameterised Constructor is called" << endl;
    }

    int add(){
        cout << a+b << endl;
    }
    int subtract(){
        cout << a-b << endl;
    }
    int multiply(){
        cout << a*b << endl;
    }
    int divide(){
        cout << a/b << endl;
    }

    // Desconstructor
    ~Calculator(){
        cout << "Deconstructor is called" << endl;
    }
};

// Note: Destructor is automatically called in static allocation. but for dynamic allocation needs manual desctructor.

int main()
{
    // static object creation
    Calculator calci(14,40);
    calci.add();
    calci.subtract();
    calci.multiply();

    // Copy constructor
    Calculator simpleCalci(calci); // here copy constructor is called

    // Dynamic object creation
    Calculator *myCalci = new Calculator;
    
    return 0;
}