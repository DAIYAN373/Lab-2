// 2 no. from slide
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int num_students = 5;
    double grade,sum = 0,average;
    cout<<"Enter the grades of "<<num_students<< "Students : " <<endl;
    for(int i = 1;i <=num_students;++i)
    {
        cout<<"Grade of student " <<i<<": ";
        cin>>grade;
        sum+=grade;

    }
    average = sum/num_students;
    cout<<"The average grade is : " <<average <<endl;
    getch();
}
