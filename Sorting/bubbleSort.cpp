#include <iostream>

using namespace std;

int main() {
    int arr[5]= {12,43,4,63,9};

    int n = 5;

    // bubble sort
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n -1 -i; j++){
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}