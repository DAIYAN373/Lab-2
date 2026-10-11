#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std ;

int main()
{
    float r,theta,area;//angle in radians
    cout<<"Enter radius : " ;
    cin>>r;

    cout<<"Enter angle in radians : " ;
    cin>>theta;

    area = (float)1/2 * pow(r,r) * theta;
    cout<<"Area of sector is : " <<area;

    getch();

}
