#include<iostream>
using namespace std;
class Employee
{
    char name[100];
    int age;
    char designation[100];
    double salary;

public:
void Employee_get()
{
    cout<<"\nEnter Employee Name : ";
    cin>>name;
    cout<<"\nEnter Employee Age : ";
    cin>>age;
    cout<<"\nEnter Employee Designation:";
    cin>>designation;
    cout<<"\nEnter Employee Salary : ";
    cin>>salary;
}

public:
void Employee_put()
{
    cout<<"\nEmployee Name : "<<name;
    cout<<"\nEmployee Age : "<<age;
    cout<<"\nEmployee Designation:"<<designation;
    cout<<"\nEmployee Salary : "<<salary;
}
}

int main()
{
    Employee E[5];
    int i;
    for(i=0;i<5;i++)
    {
        E[i].Employee_get();
    }
        for(i=0;i<5;i++)
    {
        E[i].Employee_put();  
    }
    return 0;
}