#include <iostream>
using namespace std;

enum sumit
{
    high=10,
    medium,
    low
};
int main()
{
    enum sumit obj = medium;
    switch (obj)
    {
        case 10:
        cout << "high";
        break;

        case 11:
        cout << "medium";
        break;

        case 12:
        cout << "low";
        break;
    }
    return 0;
}