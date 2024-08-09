#include <iostream>
#include <stack>
using namespace std;

void printRev(stack<int> &st)
{
    if(st.size() == 0) return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    printRev(st);
    st.push(x);
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

    // printing using recursively
    printRev(st);

    return 0;
}