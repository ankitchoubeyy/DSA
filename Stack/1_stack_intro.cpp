#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Your code here
    stack<int> st;
    stack<int> tempSt;
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << "Printing all stack elements:" << endl;

    while (st.size() > 0)
    {
        cout << st.top() << " ";
        int x = st.top();
        st.pop();
        tempSt.push(x);
    }
    cout << endl;
    // tempSt --> st
    while (tempSt.size() > 0)
    {
        cout << tempSt.top() << " ";
        int x = tempSt.top();
        tempSt.pop();
        st.push(x);
    }
    cout << endl << st.size();

    return 0;
}