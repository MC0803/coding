#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    int marks;

public:
    void setRoll(int r)
    {
        rollno = r;
    }
    void setname(string n)
    {
        name = n;
    }
    void setmarks(int m)
    {
        marks = m;
    }
    int getroll()
    {
        return rollno;
    }
    string getname()
    {
        return name;
    }
    int getmarks()
    {
        return marks;
    }
    string grade()
    {
        float p = (marks / 500.0f) * 100;
        if (p >= 75)
            return "First Division";
        else if (p >= 60)
            return "Second Division";
        else if (p > 50)
            return "Third Division";
        else
            return "Fourth Division / Fail";
    }
};

int main()
{
    Student s, st1[5];
    cout << sizeof(s) << endl;
    cout << sizeof(st1);
    s.setRoll(10);
    s.setname("Priya");
    s.setmarks(400);
    cout << "\nRoll Number = " << s.getroll() << endl;
    cout << " Name = " << s.getname() << endl;
    cout << " Marks = " << s.getmarks() << endl;
    cout << "Grade = " << s.grade() << endl;

    return 0;
}