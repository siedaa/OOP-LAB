#include <iostream>
using namespace std;

int* dynamicallyAllocatingMemory(int n) {
    return new int[n];
}

void input(int* arry, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter the value for index " << i << ": ";
        cin >> arry[i];
    }
}

void displayArray(int* arry, int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << *(arry + i) << " | ";
    }
    cout << endl;
}

int arraySum(int* arry, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arry + i);
    }
    return sum;
}

void deallocateMemory(int* arry) {
    delete[] arry;
    cout << "Memory has been successfully deallocated." << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arry = dynamicallyAllocatingMemory(n);
    cout << "Memory allocated successfully.\n" << endl;

    input(arry, n);
    
    cout << "\nDisplaying array using pointer arithmetic:" << endl;
    displayArray(arry, n);

    cout << "\nCalculating sum of the array using pointers..." << endl;
    cout << "Sum of the array: " << arraySum(arry, n) << endl;

    cout << "\nDeallocating memory..." << endl;
    deallocateMemory(arry);

    return 0;
}
