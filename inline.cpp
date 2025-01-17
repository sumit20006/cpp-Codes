#include <iostream>
using namespace std;
class sumit 
{
    int a, b;
    int add, sub, mul;
    double div;

public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};

inline void sumit ::get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}

inline void sumit ::sum()
{
    add = a + b;
    cout << "Addition of two numbers: " << a + b << "\n";
}

inline void sumit ::difference()
{
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << "\n";
}

inline void sumit ::product()
{
    mul = a * b;
    cout << "Product of two numbers: " << a * b << "\n";
}

inline void sumit ::division()
{
    div = a / b;
    cout << "Division of two numbers: " << a / b << "\n";
}

int main()
{
    sumit s;
    s.get();
    
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}