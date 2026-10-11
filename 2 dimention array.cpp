#include<iostream>

#include<conio.h>

using namespace std;

int main()
{
    int r,c;


    cout<<"Enter row : ";
    cin>>r;

    cout<<"Enter colum : ";
    cin>>c;
    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Element "<<i+1<<": ";
            cin>>arr[i][j];
        }
    }
    for(int i =0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum =0;
    for(int i=0;i<r;i++)
    {
     sum+=
    }
}
