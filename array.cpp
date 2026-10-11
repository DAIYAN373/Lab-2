#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int a[6],i;
    for(i=0;i<=5;i++)
    {
      cout<<"Enter value of a"<<i<< " :";
        cin>>a[i];
    }

    for(i=0;i<=5;i++)
    {


        cout<<a[i]<<endl;
    }

    getch();
}
