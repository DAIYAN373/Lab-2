#include<iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter row : ";
    cin>>r;
    cout<<"Enter colum : ";
    cin>>c;

    int arr[r][c];
    cout<<"Enter element for array : "<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j =0;j<c;j++)
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
    cout<<"Diagonal summation : "<<endl;
   int sum =0;

    for(int i =0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }


    }
     cout<<"summation : "<<sum-12<<endl;

    return 0;

}
