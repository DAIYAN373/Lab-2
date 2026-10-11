//Transpose of Matrix
#include<iostream>

using namespace std;
int main()
{
    int r,c;
    cout<<"Enter row : ";
    cin>>r;
    cout<<"Enter colum : " ;
    cin>>c;
    int arr[r][c];
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Element "<<i+1<<" :";
            cin>>arr[i][j];
        }


    }
    cout<<"Elements in the array: "<<endl;
     for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }
    int sum =0;
      cout<<"Matrix transpose: "<<endl;
     for(int i =0;i<r;i++)
    {
      sum+= arr[i][i];

    }
    cout<<sum<<endl;


return 0;
}
