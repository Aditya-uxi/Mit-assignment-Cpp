#include <iostream>
#include <string>
using namespace std;

class student 
{
    int rollno;
    string name, result;
    float marks_sub1, marks_sub2, marks_sub3, total, percent;

public:
    void acceptdetail() 
    {
        cout << "Enter Rollno: ";
        cin >> rollno;
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Marks of subject1: ";
        cin >> marks_sub1;
        cout << "Marks of subject2: ";
        cin >> marks_sub2;
        cout << "Marks of subject3: ";
        cin >> marks_sub3;
    }

    void calcresult() 
    {
        total = marks_sub1 + marks_sub2 + marks_sub3;
        percent = (total / 300.0f) * 100;

        if (percent > 60) {
            result = "First Class";
        } else if (percent > 50) {
            result = "Second Class";
        } else if (percent > 40) {
            result = "Pass";
        } else {
            result = "Fail";
        }
    }

    void displayinfo() 
    {
        cout << "\n----student detail-----" << endl;
        cout << "Rollno is: " << rollno << endl;
        cout << "Name is: " << name << endl;
        cout << "Subject 1 marks: " << marks_sub1 << endl;
        cout << "Subject 2 marks: " << marks_sub2 << endl;
        cout << "Subject 3 marks: " << marks_sub3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percent: " << percent << "%" << endl;
        cout << "Result: " << result << endl;
    }
};

int main() 
{
    student s1;
    s1.acceptdetail();
    s1.calcresult();
    s1.displayinfo();
    return 0;
}