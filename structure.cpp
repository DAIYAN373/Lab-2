#include<iostream>

using namespace std;

 struct student
 {
     char name[100];
     int id;
     double cgpa;
 };
 int main()
 {
     student s1,s2,s3;
     cout<<"Enter user details : " <<endl;
     cout<<"Enter name for s1 : ";
     cin.getline(s1.name,100);
     cout<<"Enter id for s1 : ";
     cin>>s1.id;
     cout<<"Enter cgpa for s1 : ";
     cin>>s1.cgpa;

     cout<<"Student information : " <<endl;
     cout<<"Name : "<<s1.name<<endl;
     cout<<"Id : "<<s1.id<<endl;
     cout<<"cgpa : "<<s1.cgpa<<endl;

 }
