//6.Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int emp_id;
    int salary;

public:
    Employee(int id, int sal, const string &nm) : emp_id(id), salary(sal), name(nm) {}

    void setSalary(double performanceRate)
    {
        if (performanceRate < 0) {
            cout << "Performance rate cannot be negative." << endl;
            return;
        }

        int increment = static_cast<int>(salary * (performanceRate / 100.0));
        salary += increment;
    }
    void display() const
    {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee Salary: $" << salary << endl;
    }
};

int main()
{
    Employee e1(101, 1000, "ramesh");
    e1.setSalary(12.5);
    e1.display();

    return 0;
}


