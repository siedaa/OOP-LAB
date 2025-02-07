#include <iostream>
using namespace std;

int ***createArray(int x, int y, int z) {
    int ***arr = new int **[x];
    for (int i = 0; i < x; i++) {
        arr[i] = new int *[y];
        for (int j = 0; j < y; j++) {
            arr[i][j] = new int[z];
        }
    }
    return arr;
}

void getInput(int ***arr, int x, int y, int z) {
    cout << "Enter " << x * y * z << " values:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Enter [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }
}

void printArray(int ***arr, int x, int y, int z) {
    cout << "\n3D Array Elements:\n";
    for (int i = 0; i < x; i++) {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " | ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void releaseMemory(int ***arr, int x, int y) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
    cout << "Memory has been released.\n";
}

int main() {
    int x, y, z;
    cout << "Enter dimensions (x y z): ";
    cin >> x >> y >> z;

    int ***arr = createArray(x, y, z);

    getInput(arr, x, y, z);
    printArray(arr, x, y, z);

    releaseMemory(arr, x, y);
    return 0;
}
