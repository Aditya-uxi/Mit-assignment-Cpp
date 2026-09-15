#include <iostream>
using namespace std;

class rectangle 
{
    float length, breadth, area, perimeter;

public:
    void getdata() 
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void calculate() 
    {
        area = length * breadth;
        perimeter = 2 * (length + breadth);
    }

    void display() 
    {
        cout << "Area of rectangle = " << area << endl;
        cout << "Perimeter of rectangle = " << perimeter << endl;
    }
};

int main() 
{
    rectangle r;
    r.getdata();
    r.calculate();
    r.display();
    return 0;
}