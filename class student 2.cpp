#include<iostream>
#include<string>
using namespace std;
class student
{
private :
    string name;
    int id;
public:
    student()
    {
        cout<<"Default Constructor"<<endl;
    }
    student(string Name)
    {
        cout<<"1 parameterized constructor "<<endl;
        name = Name;
    }
        student(string Name,int Id)
    {
        cout<<"2 parameterized constructor "<<endl;
        name = Name;
        id=Id;
    }



        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"ID : "<<id<<endl;
        }
        ~student()
        {
            cout<<"Destructor called "<<endl;
        }

};
int main()
{

    student s1("Alex",1);
    student s2("John",2);
    student s3;
    student s4("Bob");
      s1.display();
    s2.display();
    s4.display();
}



