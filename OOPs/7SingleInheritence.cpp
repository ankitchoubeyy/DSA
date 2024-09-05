#include<iostream>
using namespace std;

class Human{
    public:
    string name, sex;
    int age;

};
// single inheritence : taking properties from the parent class directly.
class Male: public Human{
    public:
    string favColor;

    // constructor
    Male(string name, string sex, int age, string favColor){
        this->name = name;
        this->sex = sex;
        this->age = age;
        this->favColor = favColor;
    }
};

int main()
{
    Male ankit("Ankit", "Male", 22, "Yellow");
    cout << ankit.age << endl << ankit.favColor << endl;
    return 0;
}