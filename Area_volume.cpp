#include<iostream>
using namespace std;
class Room 
{
    int length;
    int breadth;
    int height;

public:
    void Area(int length, int breadth) 
    {
       int area = length * breadth;
       cout << "Area of the room: " << area << " square units" <<endl;
    }

    void Volume(int length, int breadth, int height) {
        int volume = length * breadth * height;
        cout << "Volume of the room: " << volume << " cubic units" <<endl;

    }

};

int main() {
    
    int Length;
    int Breadth;
    int Height;
    cin >> Length;
    cin >> Breadth;
    cin >> Height;

    Room sumit;
    
    sumit.Area(Length, Breadth);
    sumit.Volume(Length, Breadth, Height);
    return 0;

}