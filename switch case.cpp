#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n1,n2;
    char shiponkolarbepari;
    cout<<"Enter 1st number : " ;
    cin>>n1;

    cout<<"Enter 2nd number : ";
    cin>>n2;

    cout<<"Which operation do you want to perform?"<<endl;
    cin>>shiponkolarbepari;
    switch(shiponkolarbepari)
    {
    case '+' :
        cout<<n1+n2;
        break;
    case '-' :
        cout<<n1-n2;
        break;
    case '*' :
        cout<<n1*n2;
        break;
    case '/' :
        if(n2!=0)
        {
            cout<<n1/n2<<endl;
        }
        else
        {
            cout<<"Eror : division by zero is not allowed.";
        }
        break;
    case '%' :
        cout<<n1%n2;
        break;
    default :
        cout<<"Invalid operation ";
    }
    getch();
}
