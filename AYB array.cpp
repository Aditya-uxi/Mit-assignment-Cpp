#include <iostream>
#include <string>
using namespace std;

class Student
{
    int marks[3];

public:
    void getmarks()
    {
        cout << "Enter marks of subject 1: ";
        cin >> marks[0];
        cout << "Enter marks of subject 2: ";
        cin >> marks[1];
        cout << "Enter marks of subject 3: ";
        cin >> marks[2];
    }

    void showmarks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks: " << marks[i] << endl;
        }
    }
};

int main()
{
    Student s1;
    s1.getmarks();
    s1.showmarks();
    return 0;
}