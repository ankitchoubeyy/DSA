#include <iostream>
using namespace std;

class Stack
{
public:
    int arr[5];
    int idx = -1;

    void push(int value)
    {
        if (idx == 4)
        {
            cout << "Stack is full." << endl;
            return;
        }
        idx++;
        arr[idx] = value;
    }

    void pop()
    {
        if(idx == -1)
        {
            cout << "stck is empty!" << endl;
            return;
        }
        idx--;
    }

    int top()
    {
        if(idx == -1)
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        return arr[idx];
    }

    int size()
    {
        return idx + 1;
    }
};

using namespace std;

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.top() << endl;
    cout << st.size() << endl;

    return 0;
}