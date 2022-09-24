//in this example we define funtions outside the class but still they are member of class bcz at the time of difining funtions we lable class name as (complex::)for this we aslo declered funtions into the class//
#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
private:
    int id, salary;
    string empName;

public:
    Employee()
    {

        this->id = 0;
        this->salary = 0;
        this->empName = "";
    }

    Employee(int id, int salary, string empName)
    {

        this->id = id;
        this->salary = salary;
        this->empName = empName;
    }

    void setData(int id, int salary, string empName)
    {

        this->id = id;
        this->salary = salary;
        this->empName = empName;
    }

    void showData()
    {

        cout << "The id is: " << this->id << endl;
        cout << "The salary is: " << this->salary << endl;
        cout << "The Name is: " << this->empName << endl;
    }

    void setId(int id)
    {

        this->id = id;
    }

    void setSalary(int salary)
    {
        this->salary = salary;
    }

    void setEmpName(string empName)
    {

        this->empName = empName;
    }

    void getId()
    {

        cout << this->id << endl;
    }

    void getSalary()
    {
        cout << this->salary << endl;
    }

    void getEmpName()
    {

        cout << this->empName << endl;
    }
};
int main()
{
   // Employee emp(1, 22000, "sajid");

    //Employee emp = new Employee();
    Employee *p=new Employee();
    p->getEmpName();

    //emp.getEmpName();

    return 0;
}