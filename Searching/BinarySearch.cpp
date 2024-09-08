#include <iostream>

using namespace std;

int main()
{

    // Binary search
    int arr[5] = {1, 3, 5, 7, 9};

    int key = 7;
    int start = 0, end = 4;

    // driver code
    while (start <= end)
    {
        int mid = (start + (end - start) / 2);

        if (arr[mid] == key)
        {
            cout << "Element is found at: " << mid << " ";
            break;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1; // towards right
        }
        else
        {
            end = mid - 1; // towards left
        }
    }

    return 0;
}