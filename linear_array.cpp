#include <iostream>
using namespace std;

#define MAX_SIZE 100

void insertElement(int arr[], int &size, int element, int position = -1) {
    if (size >= MAX_SIZE) {
        cout << "Array is full! Cannot insert more elements." << endl;
        return;
    }
    if (position == -1) {
        arr[size] = element;
    } else {
        if (position < 0 || position > size) {
            cout << "Invalid position!" << endl;
            return;
        }
        for (int i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = element;
    }
    size++;
}

void deleteElement(int arr[], int &size, int value = -1, int position = -1) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    if (position != -1) {
        if (position < 0 || position >= size) {
            cout << "Invalid position!" << endl;
            return;
        }
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
    } else {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout << "Element not found!" << endl;
            return;
        }
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
    }
    size--;
}

void displayArray(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;
    
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Insert element" << endl;
        cout << "2. Delete element" << endl;
        cout << "3. Display array" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter position (or -1 to insert at end): ";
                cin >> position;
                insertElement(arr, size, element, position);
                break;
            case 2:
                int deleteType;
                cout << "Delete by (1) Value or (2) Position: ";
                cin >> deleteType;
                if (deleteType == 1) {
                    cout << "Enter the value to delete: ";
                    cin >> element;
                    deleteElement(arr, size, element);
                } else if (deleteType == 2) {
                    cout << "Enter the position to delete: ";
                    cin >> position;
                    deleteElement(arr, size, -1, position);
                } else {
                    cout << "Invalid choice!" << endl;
                }
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    }
}