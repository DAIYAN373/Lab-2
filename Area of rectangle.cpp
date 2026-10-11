#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    int width,height,area;

    cout<<setw(20)<<"Enter width : " ;
    cin>>width;

    cout<<setw(20)<<"Enter height : " ;
    cin>> height;

    area = width * height ;

    cout<<"Area of recrangle is : " <<area ;

    getch();


}
