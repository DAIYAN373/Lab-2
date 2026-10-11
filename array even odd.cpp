#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int datastore[7],i;
    cout<<"Give me integar number : "<<endl;
    for(i=0;i<7;i++)
    {

        cin>>datastore[i];
    }
    for(i=0;i<7;i++)
    {
        if(datastore[i]%2==0)
        {


            cout<<"The number "<<datastore[i]<<" is even"<<endl;
        }
        else
        {
            cout<<"The number "<<datastore[i]<<" is odd"<<endl;
        }
    }

}

