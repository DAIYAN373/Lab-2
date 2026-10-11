//7no.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n<=0)
    {
        cout<<"Enter positive integer ."<<endl;
        return 0;
    }
    int a =0,b=1,next;
    cout<<"The first "<<n<<" numbers in the fibonacci sequence are : "<<endl;
    if(n>=1)
    {

        cout<< a<<" ";
    }
    for(int i =2;i<=n;i++)
    {
        cout<<b<<" ";
        next = a+b;
        a=b;
        b = next;
    }
    cout<<endl;
    return 0;

}
