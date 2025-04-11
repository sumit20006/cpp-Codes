#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int, greater<int>>  number;
    int n; int val;

    cout << "Enter number of elements" << endl;
    cin >> n ;

    cout << "enter " << n << " elements" << endl;
    for(int i=0 ;i<n ;i++)
    {
        cin >> val;
        number.insert(val);
    }
    for (int num:number)
    {
        cout << num  ;
    }
    return 0;
}