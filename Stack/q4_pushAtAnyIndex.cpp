#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> &st)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        temp.pop();
    }
}

void pushAtAnyIndex(stack<int> &st, int element, int index)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
        // logic to add element at bottom
        if (st.size() == index - 1)
        {
            temp.push(element);
        }
    }
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    pushAtAnyIndex(st, 95, 3);
    pushAtAnyIndex(st, 80, 5);
    printStack(st);

    return 0;
}