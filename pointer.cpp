#include<iostream>

using namespace std;
int main()
{
    int x =10;
    int *ptr;
    ptr =&x;
    cout<<"Value of ptr: "<<*ptr<<endl;
     cout<<"Value of x: "<<x<<endl;
      cout<<"Address of ptr: "<<&ptr<<endl;
       cout<<"Address of x: "<<&x<<endl;
       cout<<"Address of x: "<<ptr<<endl;


}
