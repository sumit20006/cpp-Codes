#include <iostream>
using namespace std;

void input(int &age)
{
    cout << "Enter age: ";
    cin >> age;
}

int main() 
{
    int age;
    input(age);
    try 
    {
        if (age >= 18) 
        {
            cout << "Access granted - You are old enough." << endl;
        } 
        else 
        {
            throw "Access denied - You must be at least 18 years old.";
        }
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}
