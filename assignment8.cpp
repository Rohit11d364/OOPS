#include <iostream>
#include <string>
using namespace std;

class BasicInfo
{
protected:
    int id;
    string name;
    int age;

public:
    void readBasicInfo()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        getline(cin >> ws, name);

        cout << "Enter Employee Age: ";
        cin >> age;
    }
};

class DepartmentInfo
{
protected:
    string department;
    float salary;

public:
    void readDepartmentInfo()
    {
        cout << "Enter Department Name: ";
        getline(cin >> ws, department);

        cout << "Enter Salary: ";
        cin >> salary;
    }
};

class Employee : public BasicInfo, public DepartmentInfo
{
public:
    void read()
    {
        readBasicInfo();
        readDepartmentInfo();
    }

    void display()
    {
        cout << "\n--- Employee Information ---" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.read();
    e.display();

    return 0;
}
