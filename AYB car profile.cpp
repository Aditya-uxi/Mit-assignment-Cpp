#include <iostream>
#include <string>
using namespace std;

class car 
{
public:
    int modelno = 123;
    string colour = "white";
    string brand = "bmw";
    float speed = 480;

    void driving() 
    {
        cout << "i'am driving" << endl;
    }

    void display() 
    {
        cout << "Model No: " << modelno << endl;
        cout << "Colour: " << colour << endl;
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main() 
{
    car c1;
    c1.driving();
    c1.display();
    return 0;
}