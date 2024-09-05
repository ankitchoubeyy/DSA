
#include<iostream>
using namespace std;

class A {
public:
    int a;

    void aValue() {
        cout << "Enter the value of a: " << endl;
        cin >> a;
    }
};

class B : public A {
public:
    int b;

    void bValue() {
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }
};

class C : public B {
public:
    int c;

    void cValue() {
        cout << "Enter the value of c: " << endl;
        cin >> c;
    }

    // function to add the values
    int sum() {
        return a + b + c;
    }
};

int main() {
    C obj;
    obj.aValue();
    obj.bValue();
    obj.cValue();
    int result = obj.sum();
    cout << "Sum of a+b+c : " << result << endl;

    return 0;
}