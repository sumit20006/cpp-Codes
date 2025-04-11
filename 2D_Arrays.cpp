#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array1[rows][cols], array2[rows][cols], sum[rows][cols];

    cout << "Enter elements of the first array:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> array1[i][j];
        }
    }

    cout << "Enter elements of the second array:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> array2[i][j];
        }
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    cout << "Sum of the two arrays:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}