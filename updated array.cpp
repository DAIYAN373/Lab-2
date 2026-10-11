#include<iostream>

using namespace std;

int main()
{
    int n;
    int arr[n];

    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter array eliments : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Elements "<< i+1<< ": ";
        cin>>arr[i];
    }
    int even =0;
    int odd =0;
    for(int i =0;i<n;i++)
    {
        if(arr[i]%2==0)
        {

        even++;


        }
        else {
            odd++;
        }


    }
    cout<<"Even number : "<<even<<endl;
    cout<<"Odd number : "<<odd<<endl;
    for(int i =0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }

}
