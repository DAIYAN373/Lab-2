#include<iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double breadth;
public:
    //default constructor
    Rectangle(){
        length=0;
        breadth =0;
    }
    Rectangle(double l,double b)
    {
        length =l;
        breadth = b;
    }
    void setLength(double l)
    {
        if(l>0)
        {
            length =l;
        }
        else
            cout<<"Length must be positive "<<endl;

    }
    void setBreadth(double b)
    {
        if (b>0)
        {
            breadth =b;
        }
            else
                cout<<"Breadth must be positive "<<endl;

    }
        double getLength()
        {
            return length;
        }
        double getBreadth()

        {
            return breadth;
        }
        double getArea()
        {
            return length * breadth;
        }
        void show()
        {
            cout<<"Rectangle Details : "<<endl;
            cout<<"Length : "<<length<<endl;
            cout<<"Breadth : "<<breadth<<endl;
            cout<<"Area : " <<getArea()<<endl;
        }
};
        int main()
        {
           Rectangle r1;
           //default constructor
           r1.setLength(10);
           r1.setBreadth(5);
           Rectangle r2(15,2);//parameterized constructor
           cout<<"Rectangle 1 : "<<endl;
           r1.show();
           cout<<"Rectangle 2 : "<<endl;
           r2.show();

           return 0;
        }




