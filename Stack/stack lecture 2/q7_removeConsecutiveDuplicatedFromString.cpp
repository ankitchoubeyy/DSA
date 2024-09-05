#include <iostream>
#include <stack>
using namespace std;

string removeDuplicates(string str)
{
    stack<char> st;
    st.push(str[0]);
    for (int i = 0; i < str.length(); i++)
    {

        if (st.top() != str[i])
        {
            st.push(str[i]);
        }
    }
    str = "";
    // forming string
    while (!st.empty())
    {
        str += st.top();
        st.pop();
    }
    // reverse(str.begin(), str.end());
    return str;
}

int main()
{
    string s = "aabbbccddeff";
    cout << s << endl;
    cout << removeDuplicates(s);
    return 0;
}