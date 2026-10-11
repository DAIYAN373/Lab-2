#include<iostream>
#include<string>
using namespace std;
class student
{
private :
    string name;
    int id;
public:

    void setValue(string Name,int Id)
    {
        name = Name;
        id=Id;
    }
        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"ID : "<<id<<endl;
        }

};
int main()
{
    student s1,s2;
    s1.setValue("Alex",1);
    s1.display();
    s2.setValue("John",2);
    s2.display();
}
