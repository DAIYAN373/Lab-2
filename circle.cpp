#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std ;

int main()
{
    float pi,r,area;
    pi = 3.1416;

    cout<<"Enter radius : ";
    cin>>r;

    area = pi * pow(r,r);
    cout<<"area of circle is : " <<area;

    getch();
}
