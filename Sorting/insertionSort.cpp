#include <iostream>

using namespace std;

int main() {
    int arr[5]= {12,43,4,63,9};

    int n = 5;

    // insertion sort == cards arrangement
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }
            else break;
        }
    }

    // printing array
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}