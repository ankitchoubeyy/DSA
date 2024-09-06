#include <iostream>

using namespace std;

int main() {
    int arr[5]= {12,43,4,63,9};
    
    // selection sort
    for(int i = 0; i < 5-1; i++)
    {
        int index = i;
        for(int j = i+1; j < 5; j++)
        {
            if(arr[j] < arr[index]){
                index = j;
            }
            swap(arr[i], arr[index]);
        }
    }

    // printing array
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}