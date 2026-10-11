#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    double a,b,height,area;

    cout<<setw(30)<<"Enter a : " ;
    cin>>a;

    cout<<setw(30)<<"Enter b : " ;
    cin>>b;

    cout<<setw(30)<<"Enter height : " ;
    cin>>height;

    area = sqrt(2) * (a+b) * height ;

    cout<<"Area of trapezium is : "<<area ;

    getch();

}
