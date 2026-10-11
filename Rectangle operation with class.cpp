#include<iostream>

using namespace std;
class Rectangle
{
private :
    double length;
    double width;
public :
   //constructor to initialize default values
    Rectangle()
    {
        length =0;
        width =0;

    }
    void setDimensions(double l,double w)
    {
        length = l;
        width = w;
    }
    double calculateArea()
    {
        return length * width;
    }
    double calculatePerimeter()
    {
        return 2*(length+width);
    }
};
int main()
{
    Rectangle r1;
    double length ,width;
    cout<<"Enter the length of the Rectangle : ";
    cin>>length;
    cout<<"Enter the width of the rectangle : ";
    cin>>width;
    r1.setDimensions(length,width);
    cout<<"Area of the rectangle : "<<r1.calculateArea()<<endl;
    cout<<"Perimeter of the rectangle : "<<r1.calculatePerimeter()<<endl;

    return 0;
}
