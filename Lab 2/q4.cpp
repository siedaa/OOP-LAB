#include <iostream>
#include <string>  // Fix incorrect include
using namespace std;

string* dynamicMemoryAllocation(int n);
void inputArray(string* arry, int n);
void displayArray(string* arry, int n);
void sortingArray(string* arry, int n);
void deallocateMemory(string* arry); // Added function for deallocation

int main()
{
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Allocating memory for strings..." << endl;
    string* arry = dynamicMemoryAllocation(n);

    cout << "Input strings: " << endl;
    inputArray(arry, n);

    cout << "\nDisplaying array before sorting:" << endl;
    displayArray(arry, n);

    cout << "\nSorting the string array alphabetically..." << endl;
    sortingArray(arry, n);

    cout << "\nDisplaying array after sorting:" << endl;
    displayArray(arry, n);

    // Deallocate memory
    deallocateMemory(arry);

    return 0;
}

string* dynamicMemoryAllocation(int n)
{
    return new string[n];
}

void inputArray(string* arry, int n)
{
    cin.ignore(); // Ignore newline from previous input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter string at index " << i + 1 << ": ";
        getline(cin, arry[i]);
    }
}

void displayArray(string* arry, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }
}

void sortingArray(string* arry, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                swap(arry[j], arry[j + 1]); // Using built-in swap function
            }
        }
    }
}

void deallocateMemory(string* arry) // New function for memory deallocation
{
    delete[] arry;
    cout << "\nMemory deallocated successfully." << endl;
}
