#include <iostream>
#include <vector>

using namespace std;

class Stack
{
private:
    vector<int> vec;

public:
    void push(int value)
    {
        vec.push_back(value);
    }

    void pop()
    {
        if (vec.empty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        vec.pop_back();
    }

    int top()
    {
        if (vec.empty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return vec.back();
    }

    int size()
    {
        return vec.size();
    }

    bool isEmpty()
    {
        return vec.empty();
    }

    void display()
    {
        for (int i = vec.size() - 1; i >= 0; i--)
        {
            cout << vec[i] << endl;
        }
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;

    st.display();

    st.pop();
    cout << "After popping one element:" << endl;
    st.display();

    return 0;
}
