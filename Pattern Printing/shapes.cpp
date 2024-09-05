#include <iostream>

using namespace std;

int main()
{
    // Your code here
    // Square
    cout << "Square Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // rectangle
    cout << "Rectangle Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Right Triangle
    cout << "Right Triangle Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Row Rectangle
    cout << "Row Rectangle Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    // Column Number Rectangle
    cout << "Column Number Rectangle Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    // Reverse Number Rectangle
    cout << "Reverse Number Rectangle Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << 5 - j << " ";
        }
        cout << endl;
    }

    // Row Alphabet Rectangle
    cout << "Row Alphabet Rectangle Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << char(97 + i) << " ";
        }
        cout << endl;
    }

    // Column Alphabet Rectangle
    cout << "Column Alphabet Rectangle Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << char(97 + j) << " ";
        }
        cout << endl;
    }

    // Increasing Number Rectangle
    cout << "Increasing Number Rectangle Pattern" << endl;
    int count = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }

    // Number Right Triangle
    cout << "Number Right Triangle Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    // Row Repeat Number Right Triangle
    cout << "Row Repeat Number Right Triangle Pattern" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    // Reverse Number Right Triangle
    cout << "Reverse Row Number Right Triangle Pattern" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // Alphabet row repeat Right Triangle
    cout << "Alphabet row repeat Right Triangle Pattern" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(96 + i) << " ";
        }
        cout << endl;
    }

    // Reverse Right Triangle
    cout << "Reverse Right Triangle Pattern" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Reverse Right Triangle
    cout << "Reverse Right Number Triangle Pattern" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Reverse Descending Number Right Triangle
    cout << "Right Descending Number Triangle Pattern" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 6 - j << " ";
        }
        cout << endl;
    }

    // Medium level Questions

    // 1. Triangle with Space
    cout << "Triangle with Space" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 10 - i; j > 1; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Triangle with Space and same row value
    cout << "Triangle with Space and same row value" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 8 - i; j > 1; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    // 3. Triangle with Space having
    cout << "Triangle with Space and same row value" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 8 - i; j > 1; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << char(65 + k) << " ";
        }
        cout << endl;
    }

    // Hard Patterns

    // 1. Pyramid Pattern
    cout << "Pyramid Pattern" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 6 - i; j > 1; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < (i * 2) - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Palindrome pyramid

    cout << "Palindrome pyrmid" << endl;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 8 - i; j >= 1; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << k << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    return 0;
}