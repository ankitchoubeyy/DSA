#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stA, stB, stC;
    stA.push(10);
    stA.push(20);
    stA.push(30);
    stA.push(40);
    stA.push(50);

    // copying stA into another stack in similar order
    while (stA.size() > 0)
    {
        cout << stA.top() << " ";
        stB.push(stA.top());
        stA.pop();
    }
    cout << endl;
    while (stB.size() > 0)
    {
        cout << stB.top() << " ";
        stC.push(stB.top());
        stB.pop();
    }
    cout << endl;

    cout << stC.top();

    return 0;
}