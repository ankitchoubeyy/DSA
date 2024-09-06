#include <iostream>
#include <vector>
using namespace std;

// Sum of array
int sumOfArray(int size)
{
    int arr[size];

    cout << "Enter the elements: ";

    // inserting elements
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Driver code
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// linear search
int linearSearch(int n)
{
    int myArr[8] = {10, 2, 3, 4, 52, 6, 7, 8};

    // search n
    bool flag;
    int pos;
    for (int i = 0; i < 8; i++)
    {
        if (myArr[i] == n)
        {
            flag = true;
            pos = i + 1;
        }
    }
    if (flag == true)
    {
        cout << "Present at: " << pos << endl;
    }
    return 0;
}

// minimum element
int findMinElement()
{
    int arr[5] = {10, 21, 4, 1, 39};

    int min = arr[1];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum element: " << min << endl;
    return 0;
}

// Maximum element
int findMaxElement()
{
    int arr[5] = {10, 21, 70, 1, 39};

    int max = arr[1];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum element: " << max << endl;
    return 0;
}

// Second Max element
int findSecondMaxElement()
{
    int arr[5] = {10, 61, 70, 1, 39};

    int max = arr[0];

    // find max
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // find second max
    int sMax = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > sMax && arr[i] < max){
            sMax = arr[i];
        }
    }

    cout << "Second maximum element: " << sMax << endl;
    return 0;
}

// reverse array
int reverseArr(){
    int arr[5] = {10, 20, 30, 40, 50};
    int start = 0, end = 4;

    while (start < end)
    {
        /* code */
        swap(arr[start], arr[end]);
        start++;
        end --;
    }

    cout << "Reverse array: "<< endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// rotate array
void rotate(vector<int> &arr) {
        // storing last element 
        int temp = arr[arr.size()-1];
        
        // shifting elements by one
        for(int i = arr.size()-2; i >= 0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
        
        // printing elements
        cout << "rotated array: " << endl;
        for(int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
    }

int main()
{
    // cout << "Sum of Array elements: " << sumOfArray(5) << endl;
    // linearSearch(10);
    // findMinElement();
    // findMaxElement();
    // findSecondMaxElement();
    // reverseArr();

    vector<int> v = {1,2,3,4,5};
    rotate(v);
    return 0;
}