#include<iostream>

#include<string>

using namespace std;

class student
{
protected :
    string name ;
    int age;
public :
    student(string Name ,int Age)
    {
        name = Name ;
        age =Age;
        cout<<"Student constructor called " <<endl;
    }
    ~student()
    {
        cout<<"Student destructor called ."<<endl;
    }
    void display()
    {
        cout<<"Name : "<<name <<" , Age : "<<age<<endl;
    }
};
class undergraduate : public student
{
private:
    string major;
public :
    undergraduate(string name ,int age,string Major): student(name,age)
    {
        major=Major;
        cout<<"Undergraduate constructor called"<<endl;
    }
    ~undergraduate()
    {
        cout<<"Undergraduate destructor called."<<endl;
    }
    void displayMajor()
    {
        cout<<"Major : "<<major<<endl;
    }
    void display()
    {
        student :: display()
        displayMajor();
    }
};
class Graduate :public student
{
private :
    string researchTopic;
public:
    Graduate(string name,int age,string ResearchTopic):student
};
