#include <iostream>
#include <stack>
using namespace std;

bool isBalacedBrackets(string s)
{

    stack<char> st;

    if (s.length() % 2 != 0)
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.size() == 0)
                return false;
            else
            {
                st.pop();
            }
        }
    }
    if (st.size() == 0)
        return true;
    else
        return false;
}

int main()
{
    stack<char> st;

    string s1 = "())()";  // false
    string s2 = "()()()"; // true

    // cout << s1.length();

    cout << isBalacedBrackets(s2);

    return 0;
}