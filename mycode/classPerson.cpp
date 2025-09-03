#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(string n = "", int a = 0) : name(n), age(a) {};
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    friend class Student; // Allow Student class to access private members of Person
};

class Student : public Person
{
    int StudentID;

public:
    Student(string n = "", int a = 0, int id = 0) : Person(n, a), StudentID(id) {};
    void getStudentID()
    {
        cout << "Student ID =" << StudentID << endl;
    }
    void getDetails()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};
int main()
{
    Student s("John ", 20, 12345);
    s.getDetails();
    s.getStudentID();

    return 0;
}