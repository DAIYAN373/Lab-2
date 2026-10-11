#include<iostream>

using namespace std ;
void fun()
{
    static int x =0;
    int a =5;
    a++;
    x = x+2;
    cout<<a<<endl;
    cout<<x<<endl;
}

int main ()
{
    fun();
    fun();
    fun();
}
