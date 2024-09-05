#include <iostream>
using namespace std;

class Book
{
private:
    string name;
    int price;
    int pages;

public:
    // setters
    void setName(string n)
    {
        name = n;
    }
    void setPrice(int pr)
    {
        price = pr;
    }
    void setPages(int p)
    {
        pages = p;
    }

    // getters
    void getName()
    {
        cout << name << endl;
    }
    void getPrice()
    {
        cout << price << endl;
    }
    void getPages()
    {
        cout << pages << endl;
    }

    // member function
    int countBooks(int pr)
    {
        if (price < pr)
        {
            return 1;
        }
        else
            return 0;
    }

    bool isBookPresent(string title)
    {
        if (name == title)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    Book JamesClear;
    JamesClear.setName("Atomic Habits");
    JamesClear.setPrice(450);
    JamesClear.setPrice(340);

    cout << JamesClear.countBooks(700) << endl;
    cout << JamesClear.isBookPresent("Atomic Habits") << endl;


    return 0;
}