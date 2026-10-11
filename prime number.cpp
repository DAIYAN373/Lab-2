//13 no.
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int n;
    cout<<"Type a number to check  1 to n is prime or not :";
    cin>>n;

    if(n<=1)
    {
        cout<<"Is not a prime number"<<endl;
    }
    else
    {
        int i;
        cout<<"Prime number between 1 and "<<n<<" are: "<<endl;
        for( i =2;i<=n;i++)
          {
            int isPrime =1;
            for(int j =2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    isPrime =0;//not a prime number
                    break;
                }
            }
            if(isPrime==1)
            {
                cout<<i<<" ";
            }


          }

cout<<endl;
    }


    getch();
}



