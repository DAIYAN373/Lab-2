#include<iostream>
#include<string>

using namespace std;
class person
{
private :
    int age;
    double height;
public :
    person()
    {
        cout<<"Default constructor "<<endl;
    }
        person (int Age)
        {
            cout<<"1 parameterized constructor"<<endl;
        }
        person(double Height)
        {
            cout<<"1 parameterized constructor"<<endl;
        }
        person(int Age,double Height)
        {
            cout<<"2 parameterized constructor "<<endl;
            age =Age;
            height =Height;
        }
        void display()
        {
            cout<<"Age : "<<age<<endl;
            cout<<"Height : "<<height<<endl;
        }

};
int main()
{
    person p1(19,1.73);
    person p2 (18);
    person p3(1.63);
    person p4;
    p1.display();
     p2.display();
      p3.display();
       p4.display();
}
