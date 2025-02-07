#include <iostream>
using namespace std;

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

void getInput(Product *list, int size) {
    for (int i = 0; i < size; i++) {
        cout << "\nEnter details for Product " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> list[i].id;
        cout << "Name: ";
        cin.ignore();
        cin.getline(list[i].name, 50);
        cout << "Quantity: ";
        cin >> list[i].quantity;
        cout << "Price: ";
        cin >> list[i].price;
    }
}

float getTotal(Product *list, int size) {
    float totalValue = 0;
    for (int i = 0; i < size; i++) {
        totalValue += list[i].quantity * list[i].price;
    }
    return totalValue;
}

void showProducts(Product *list, int size) {
    cout << "\nProduct List:\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << "ID: " << list[i].id << "\n";
        cout << "Name: " << list[i].name << "\n";
        cout << "Quantity: " << list[i].quantity << "\n";
        cout << "Price: $" << list[i].price << "\n";
        cout << "-----------------------------------\n";
    }
    cout << "Total Inventory Value: $" << getTotal(list, size) << "\n";
}

int main() {
    int size;
    cout << "Enter the number of products: ";
    cin >> size;

    Product *list = new Product[size];

    getInput(list, size);
    showProducts(list, size);

    delete[] list;
    cout << "Memory released.\n";

    return 0;
}
