// 3no.
#include<iostream>

using namespace std;

int main()
{
    int n,sum= 0;
    cout<<"Enter a positive integer : ";
    cin>>n;
    if(n<1)
    {
        cout<<"Please enter a positive integer than 1 or equal 1.";
    }
    for(int i = 1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum +=i;
        }
    }
    cout<<"Sum of all even number between 1 and "<<n<<" is: "<<sum<<endl;
    return 0;
}
