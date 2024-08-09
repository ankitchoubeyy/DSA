#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <int> st,tempA,tempB;
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);

    cout << "top: " << st.top() << endl;
    cout << "Simple Stack: ";
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        tempA.push(st.top());
        st.pop();
    }
    cout << endl;
    while (tempA.size() > 0)
    {
        tempB.push(tempA.top());
        tempA.pop();
    }
    cout << endl;
    while (tempB.size() > 0)
    {
        st.push(tempB.top());
        tempB.pop();
    }
    cout << "Top:" << st.top() << endl;

    cout << "Reverse Stack: ";
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    }
    

    
    return 0;
}