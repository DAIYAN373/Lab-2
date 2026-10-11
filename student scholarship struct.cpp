#include<iostream>
#include<string>

using namespace std;
struct Student
{
    int id;
    string name;
    double cgpa;
    int numberOfCreditsCompleted;
    void setData(int Id,string Name,double Cgpa,int Credit)

    {
        id=Id;
        name=Name;
        cgpa=Cgpa;
        numberOfCreditsCompleted = Credit;
    }
    int getScholarshipPercent()
    {
        if (cgpa>=3.85&& numberOfCreditsCompleted>45)
        {
            return 30 ;//30% scholarship
        }
        else if (cgpa>=3.75&& numberOfCreditsCompleted > 45)
        {
            return 20;//20% scholarship
        }
        else
        {
            return 0;//no scholarship
    }
    }
    void display()
    {
        cout<<"Student ID : "<<id<<endl;
        cout<<"Student Name : " <<name<<endl;
        cout<<"Student Cgpa : " <<cgpa<<endl;
        cout<<"Credits Completed : "<<numberOfCreditsCompleted<<endl;
        cout<<"Scholarship Percentage : "<<getScholarshipPercent()<<" %"<<endl;
    }

};

int main()
{
    Student s1;
    s1.setData(59409," Dilir Raiyan",3.85,50);
    s1.display();
    return 0;

}
