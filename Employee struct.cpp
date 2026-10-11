#include<iostream>
#include<string>

using namespace std;

struct Employee
{
    int employeeID;
    string name;
    double salary;


};
int main()
{
    Employee emp1,emp2,emp3;
    double totalSalary =0;
    cout<<"Enter details for Employee 1 : "<<endl;
    cout<<"Employee ID : ";
    cin>>emp1.employeeID;
    cin.ignore();
    cout<<"Employee name : ";
    getline(cin,emp1.name);
    cout<<"Employee salary : " ;
    cin>>emp1.salary;
    totalSalary += emp1.salary;

     cout<<"Enter details for Employee 2 : "<<endl;
    cout<<"Employee ID : ";
    cin>>emp2.employeeID;
    cin.ignore();
    cout<<"Employee name : ";
    getline(cin,emp2.name);
    cout<<"Employee salary : " ;
    cin>>emp2.salary;
    totalSalary += emp2.salary;

     cout<<"Enter details for Employee 3 : "<<endl;
    cout<<"Employee ID : ";
    cin>>emp3.employeeID;
    cin.ignore();
    cout<<"Employee name : ";
    getline(cin,emp3.name);
    cout<<"Employee salary : " ;
    cin>>emp3.salary;
    totalSalary += emp3.salary;


    cout<<"Total salary of 3 employees : "<<totalSalary<<endl;

    return 0;


}
