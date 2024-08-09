#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int>&st){
    stack<int>temp;
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

void pushAtBottom(stack<int>&st, int element){
    stack<int>helperStack;
    while (st.size() > 0)
    {
        helperStack.push(st.top());
        st.pop();
        // logic to add element at bottom
        if (st.size() == 0)
        {
            helperStack.push(element);
        }
        
    }
    while (helperStack.size() > 0)
    {
        st.push(helperStack.top());
        helperStack.pop();
    }
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "Before insertion" << endl;
    printStack(st);
    cout << endl << "insertion: 90" << endl;
    pushAtBottom(st,90);
    printStack(st);
    
    
    return 0;
}