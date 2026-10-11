//6 no.
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num,rem,sum= 0;
    cout<<"Enter a number : ";
    cin>>num;
    for( int i = num;i!=0;i/=10)
    {
       rem = i%10;
       sum += pow(rem,3);
    }

    if(sum==num)
    {
        cout<<num<<" is an Armstrong number."<<endl;
    }
    else
    {
        cout<<num<<" is not a Armstrong number."<<endl;
    }
    return 0;
}
